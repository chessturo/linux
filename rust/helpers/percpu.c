// SPDX-License-Identifier: GPL-2.0

#include <linux/percpu.h>
#include <linux/smp.h>

__rust_helper
void __percpu *rust_helper_alloc_percpu(size_t sz, size_t align)
{
	return __alloc_percpu(sz, align);
}

__rust_helper
void *rust_helper_this_cpu_ptr(void __percpu *ptr)
{
	return this_cpu_ptr(ptr);
}
__rust_helper
void *rust_helper_per_cpu_ptr(void __percpu *ptr, unsigned int cpu)
{
	return per_cpu_ptr(ptr, cpu);
}

__rust_helper
void rust_helper_on_each_cpu(smp_call_func_t func, void *info, int wait)
{
	on_each_cpu(func, info, wait);
}

#define DEFINE_RUST_HELPER_PCPU_OPS(rust_type, c_type) \
	__rust_helper \
	void rust_helper_this_cpu_add_##rust_type(c_type __percpu *ptr, c_type val) \
	{ \
		this_cpu_add(*ptr, val); \
	} \
	\
	__rust_helper \
	void rust_helper_this_cpu_sub_##rust_type(c_type __percpu *ptr, c_type val) \
	{ \
		this_cpu_sub(*ptr, val); \
	} \

DEFINE_RUST_HELPER_PCPU_OPS(u8, u8);
DEFINE_RUST_HELPER_PCPU_OPS(u16, u16);
DEFINE_RUST_HELPER_PCPU_OPS(u32, u32);
DEFINE_RUST_HELPER_PCPU_OPS(u64, u64);
DEFINE_RUST_HELPER_PCPU_OPS(usize, size_t);

DEFINE_RUST_HELPER_PCPU_OPS(i8, s8);
DEFINE_RUST_HELPER_PCPU_OPS(i16, s16);
DEFINE_RUST_HELPER_PCPU_OPS(i32, s32);
DEFINE_RUST_HELPER_PCPU_OPS(i64, s64);
DEFINE_RUST_HELPER_PCPU_OPS(isize, ssize_t);
