// SPDX-License-Identifier: GPL-2.0
//! Pin-hole optimizations for PerCpu<T> where T is a numeric type.

use crate::percpu::*;
use core::arch::asm;
use core::ops::*;

macro_rules! impl_ops {
    ($ty:ty, $reg:tt) => {
        impl AddAssign<$ty> for PerCpu<$ty> {
            fn add_assign(&mut self, rhs: $ty) {
                // SAFETY: `self.offset` is a valid offset into the per-CPU area (i.e., valid as a
                // pointer relative to the `gs` segment register) by the invariants of PerCpu.
                unsafe {
                    asm!(
                        concat!("gs add [{off}], {val:", $reg, "}"),
                        off = in(reg) self.offset as *mut $ty,
                        val = in(reg) rhs,
                    );
                }
            }
        }
        impl SubAssign<$ty> for PerCpu<$ty> {
            fn sub_assign(&mut self, rhs: $ty) {
                // SAFETY: `self.offset` is a valid offset into the per-CPU area (i.e., valid as a
                // pointer relative to the `gs` segment register) by the invariants of PerCpu.
                unsafe {
                    asm!(
                        concat!("gs sub [{off}], {val:", $reg, "}"),
                        off = in(reg) self.offset as *mut $ty,
                        val = in(reg) rhs,
                    );
                }
            }
        }
    };
}

macro_rules! impl_ops_byte {
    ($ty:ty) => {
        impl AddAssign<$ty> for PerCpu<$ty> {
            fn add_assign(&mut self, rhs: $ty) {
                // SAFETY: `self.offset` is a valid offset into the per-CPU area (i.e., valid as a
                // pointer relative to the `gs` segment register) by the invariants of PerCpu.
                unsafe {
                    asm!(
                        concat!("gs add [{off}], {val}"),
                        off = in(reg) self.offset as *mut $ty,
                        val = in(reg_byte) rhs,
                    );
                }
            }
        }
        impl SubAssign<$ty> for PerCpu<$ty> {
            fn sub_assign(&mut self, rhs: $ty) {
                // SAFETY: `self.offset` is a valid offset into the per-CPU area (i.e., valid as a
                // pointer relative to the `gs` segment register) by the invariants of PerCpu.
                unsafe {
                    asm!(
                        concat!("gs sub [{off}], {val}"),
                        off = in(reg) self.offset as *mut $ty,
                        val = in(reg_byte) rhs,
                    );
                }
            }
        }
    };
}

impl_ops_byte!(i8);
impl_ops!(i16, "x");
impl_ops!(i32, "e");
impl_ops!(i64, "r");
impl_ops!(isize, "r");

impl_ops_byte!(u8);
impl_ops!(u16, "x");
impl_ops!(u32, "e");
impl_ops!(u64, "r");
impl_ops!(usize, "r");
