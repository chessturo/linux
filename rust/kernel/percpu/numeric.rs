// SPDX-License-Identifier: GPL-2.0
//! Pin-hole optimizations for [`PerCpu<T>`] where T is a numeric type.

use super::*;
use crate::macros::paste;

/// Represents a per-CPU variable that can be manipulated with machine-intrinsic numeric
/// operations.
pub struct PerCpuNumeric<'a, T> {
    // INVARIANT: `ptr.0` is a valid offset into the per-CPU area and is initialized on all CPUs
    // (since we don't have a CPU guard, we have to be pessimistic and assume we could be on any
    // CPU).
    ptr: &'a PerCpuPtr<T>,
}

macro_rules! impl_ops {
    ($ty:tt) => {
        impl DynamicPerCpu<$ty> {
            /// Returns a [`PerCpuNumeric`] that can be used to manipulate the underlying per-CPU
            /// variable.
            #[inline]
            pub fn num(&mut self) -> PerCpuNumeric<'_, $ty> {
                // The invariant is satisfied because `DynamicPerCpu`'s invariant guarantees that
                // this pointer is valid and initialized on all CPUs.
                PerCpuNumeric { ptr: &self.alloc().0 }
            }
        }
        impl StaticPerCpu<$ty> {
            /// Returns a [`PerCpuNumeric`] that can be used to manipulate the underlying per-CPU
            /// variable.
            #[inline]
            pub fn num(&mut self) -> PerCpuNumeric<'_, $ty> {
                // The invariant is satisfied because `StaticPerCpu`'s invariant guarantees that
                // this pointer is valid and initialized on all CPUs.
                PerCpuNumeric { ptr: &self.0 }
            }
        }

        impl PerCpuNumeric<'_, $ty> {
            /// Adds `rhs` to the per-CPU variable.
            #[inline]
            pub fn add(&mut self, rhs: $ty) {
                paste! {
                    // SAFETY: `self.ptr.0` is a valid per-CPU ptr by the invariants of PerCpuPtr
                    unsafe {
                        bindings::[<this_cpu_add_ $ty>](self.ptr.0 as *mut $ty, rhs);
                    }
                }
            }
        }
        impl PerCpuNumeric<'_, $ty> {
            /// Subtracts `rhs` from the per-CPU variable.
            #[inline]
            pub fn sub(&mut self, rhs: $ty) {
                paste! {
                    // SAFETY: `self.ptr.0` is a valid per-CPU ptr by the invariants of PerCpuPtr
                    unsafe {
                        bindings::[<this_cpu_add_ $ty>](self.ptr.0 as *mut $ty, rhs);
                    }
                }
            }
        }
    };
}

impl_ops!(i8);
impl_ops!(i16);
impl_ops!(i32);
impl_ops!(i64);
impl_ops!(isize);

impl_ops!(u8);
impl_ops!(u16);
impl_ops!(u32);
impl_ops!(u64);
impl_ops!(usize);
