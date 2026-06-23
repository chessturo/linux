# 1 "arch/arm64/include/asm/percpu.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 419 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "././include/linux/compiler-version.h" 1
# 2 "<built-in>" 2
# 1 "././include/linux/kconfig.h" 1

# 1 "./include/generated/autoconf.h" 1
# 6 "././include/linux/kconfig.h" 2
# 3 "<built-in>" 2
# 1 "././include/linux/compiler_types.h" 1
# 44 "././include/linux/compiler_types.h"
# 1 "./include/linux/compiler-context-analysis.h" 1
# 232 "./include/linux/compiler-context-analysis.h"
static inline void _context_unsafe_alias(void **p)
{
}
# 45 "././include/linux/compiler_types.h" 2
# 88 "././include/linux/compiler_types.h"
# 1 "./include/linux/compiler_attributes.h" 1
# 89 "././include/linux/compiler_types.h" 2
# 170 "././include/linux/compiler_types.h"
# 1 "./include/linux/compiler-clang.h" 1
# 171 "././include/linux/compiler_types.h" 2
# 187 "././include/linux/compiler_types.h"
# 1 "./arch/arm64/include/asm/compiler.h" 1
# 188 "././include/linux/compiler_types.h" 2

struct ftrace_branch_data {
	const char *func;
	const char *file;
	unsigned line;
	union {
		struct {
			unsigned long correct;
			unsigned long incorrect;
		};
		struct {
			unsigned long miss;
			unsigned long hit;
		};
		unsigned long miss_hit[2];
	};
};

struct ftrace_likely_data {
	struct ftrace_branch_data data;
	unsigned long constant;
};
# 4 "<built-in>" 2
# 1 "arch/arm64/include/asm/percpu.h" 2

# 1 "./include/linux/preempt.h" 1
# 10 "./include/linux/preempt.h"
# 1 "./include/linux/linkage.h" 1

# 1 "./include/linux/stringify.h" 1
# 7 "./include/linux/linkage.h" 2
# 1 "./include/linux/export.h" 1

# 1 "./include/linux/compiler.h" 1
# 15 "./include/linux/compiler.h"
void ftrace_likely_update(struct ftrace_likely_data *f, int val, int expect,
			  int is_constant);
# 258 "./include/linux/compiler.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void *
offset_to_ptr(const int *off)
{
	return (void *)((unsigned long)off + *off);
}
# 369 "./include/linux/compiler.h"
# 1 "./arch/arm64/include/asm/rwonce.h" 1
# 81 "./arch/arm64/include/asm/rwonce.h"
# 1 "./include/asm-generic/rwonce.h" 1
# 26 "./include/asm-generic/rwonce.h"
# 1 "./include/linux/kasan-checks.h" 1

# 1 "./include/linux/types.h" 1

# 1 "./include/uapi/linux/types.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 1 "./include/uapi/asm-generic/types.h" 1

# 1 "./include/asm-generic/int-ll64.h" 1
# 11 "./include/asm-generic/int-ll64.h"
# 1 "./include/uapi/asm-generic/int-ll64.h" 1
# 12 "./include/uapi/asm-generic/int-ll64.h"
# 1 "./arch/arm64/include/uapi/asm/bitsperlong.h" 1
# 27 "./arch/arm64/include/uapi/asm/bitsperlong.h"
# 1 "./include/asm-generic/bitsperlong.h" 1

# 1 "./include/uapi/asm-generic/bitsperlong.h" 1
# 6 "./include/asm-generic/bitsperlong.h" 2
# 27 "./include/asm-generic/bitsperlong.h"
_Static_assert(sizeof(long) * 8 == 64,
	       "Inconsistent word size. Check asm/bitsperlong.h");
# 28 "./arch/arm64/include/uapi/asm/bitsperlong.h" 2
# 13 "./include/uapi/asm-generic/int-ll64.h" 2

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 12 "./include/asm-generic/int-ll64.h" 2

typedef __s8 s8;
typedef __u8 u8;
typedef __s16 s16;
typedef __u16 u16;
typedef __s32 s32;
typedef __u32 u32;
typedef __s64 s64;
typedef __u64 u64;
# 8 "./include/uapi/asm-generic/types.h" 2
# 2 "./arch/arm64/include/generated/uapi/asm/types.h" 2
# 6 "./include/uapi/linux/types.h" 2

# 1 "./include/uapi/linux/posix_types.h" 1

# 1 "./include/linux/stddef.h" 1

# 1 "./include/uapi/linux/stddef.h" 1
# 6 "./include/linux/stddef.h" 2

enum { false = 0, true = 1 };
# 6 "./include/uapi/linux/posix_types.h" 2
# 25 "./include/uapi/linux/posix_types.h"
typedef struct {
	unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "./arch/arm64/include/uapi/asm/posix_types.h" 1

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;

# 1 "./include/uapi/asm-generic/posix_types.h" 1
# 15 "./include/uapi/asm-generic/posix_types.h"
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;

typedef __kernel_ulong_t __kernel_ino_t;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;

typedef __kernel_long_t __kernel_suseconds_t;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 59 "./include/uapi/asm-generic/posix_types.h"
typedef unsigned int __kernel_old_dev_t;
# 72 "./include/uapi/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;

typedef struct {
	int val[2];
} __kernel_fsid_t;

typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef unsigned long long __kernel_uoff_t;
typedef __kernel_long_t __kernel_old_time_t;

typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 10 "./arch/arm64/include/uapi/asm/posix_types.h" 2
# 37 "./include/uapi/linux/posix_types.h" 2
# 15 "./include/uapi/linux/types.h" 2

typedef __signed__ __int128 __s128 __attribute__((aligned(16)));
typedef unsigned __int128 __u128 __attribute__((aligned(16)));
# 36 "./include/uapi/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 60 "./include/uapi/linux/types.h"
typedef unsigned __poll_t;
# 6 "./include/linux/types.h" 2

typedef __s128 s128;
typedef __u128 u128;

typedef u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ulong_t ino_t;
typedef __kernel_mode_t mode_t;
typedef unsigned short umode_t;
typedef u32 nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;

typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;

typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;

typedef __kernel_loff_t loff_t;
typedef __kernel_uoff_t uoff_t;
# 61 "./include/linux/types.h"
typedef __kernel_size_t size_t;

typedef __kernel_ssize_t ssize_t;

typedef __kernel_ptrdiff_t ptrdiff_t;

typedef __kernel_clock_t clock_t;

typedef __kernel_caddr_t caddr_t;

typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ullong;

typedef u8 u_int8_t;
typedef s8 int8_t;
typedef u16 u_int16_t;
typedef s16 int16_t;
typedef u32 u_int32_t;
typedef s32 int32_t;

typedef u8 uint8_t;
typedef u16 uint16_t;
typedef u32 uint32_t;

typedef u64 uint64_t;
typedef u64 u_int64_t;
typedef s64 int64_t;
# 126 "./include/linux/types.h"
typedef s64 ktime_t;
# 136 "./include/linux/types.h"
typedef u64 sector_t;
typedef u64 blkcnt_t;
# 158 "./include/linux/types.h"
typedef u64 dma_addr_t;

typedef unsigned int gfp_t;
typedef unsigned int slab_flags_t;
typedef unsigned int fmode_t;

typedef u64 phys_addr_t;

struct phys_vec {
	phys_addr_t paddr;
	size_t len;
};

typedef phys_addr_t resource_size_t;

typedef unsigned long irq_hw_number_t;

typedef struct {
	int __attribute__((__aligned__(sizeof(int)))) counter;
} atomic_t;

typedef struct {
	s64 counter;
} atomic64_t;

typedef struct {
	atomic_t refcnt;
} rcuref_t;

struct list_head {
	struct list_head *next, *prev;
};

struct hlist_head {
	struct hlist_node *first;
};

struct hlist_node {
	struct hlist_node *next, **pprev;
};

struct ustat {
	__kernel_daddr_t f_tfree;

	unsigned long f_tinode;

	char f_fname[6];
	char f_fpack[6];
};
# 246 "./include/linux/types.h"
struct callback_head {
	struct callback_head *next;
	void (*func)(struct callback_head *head);
} __attribute__((aligned(sizeof(void *))));

typedef void (*rcu_callback_t)(struct callback_head *head);
typedef void (*call_rcu_func_t)(struct callback_head *head,
				rcu_callback_t func);

typedef void (*swap_r_func_t)(void *a, void *b, int size, const void *priv);
typedef void (*swap_func_t)(void *a, void *b, int size);

typedef int (*cmp_r_func_t)(const void *a, const void *b, const void *priv);
typedef int (*cmp_func_t)(const void *a, const void *b);
# 269 "./include/linux/types.h"
struct rcuwait {
	struct task_struct *task;
};
# 6 "./include/linux/kasan-checks.h" 2
# 22 "./include/linux/kasan-checks.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
__kasan_check_read(const volatile void *p, unsigned int size)
{
	return true;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
__kasan_check_write(const volatile void *p, unsigned int size)
{
	return true;
}
# 40 "./include/linux/kasan-checks.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
kasan_check_read(const volatile void *p, unsigned int size)
{
	return true;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
kasan_check_write(const volatile void *p, unsigned int size)
{
	return true;
}
# 27 "./include/asm-generic/rwonce.h" 2
# 1 "./include/linux/kcsan-checks.h" 1
# 189 "./include/linux/kcsan-checks.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_check_access(const volatile void *ptr, size_t size, int type)
{
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_mb(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_wmb(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_rmb(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_release(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_disable_current(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_enable_current(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_enable_current_nowarn(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_nestable_atomic_begin(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_nestable_atomic_end(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_flat_atomic_begin(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_flat_atomic_end(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_atomic_next(int n)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_set_access_mask(unsigned long mask)
{
}

struct kcsan_scoped_access {};

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) struct kcsan_scoped_access *
kcsan_begin_scoped_access(const volatile void *ptr, size_t size, int type,
			  struct kcsan_scoped_access *sa)
{
	return sa;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_end_scoped_access(struct kcsan_scoped_access *sa)
{
}
# 229 "./include/linux/kcsan-checks.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kcsan_check_access(const volatile void *ptr, size_t size, int type)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_enable_current(void)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__kcsan_disable_current(void)
{
}
# 28 "./include/asm-generic/rwonce.h" 2
# 64 "./include/asm-generic/rwonce.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__read_once_word_nocheck(const void *addr)
{
	return (*(const volatile __typeof_unqual__(*(unsigned long *)addr) *)&(
		*(unsigned long *)addr));
}
# 82 "./include/asm-generic/rwonce.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
read_word_at_a_time(const void *addr)
{
	kasan_check_read(addr, 1);
	kcsan_check_access(addr, 1, 0);

	return *(unsigned long *)addr;
}
# 82 "./arch/arm64/include/asm/rwonce.h" 2
# 370 "./include/linux/compiler.h" 2
# 6 "./include/linux/export.h" 2
# 1 "./include/linux/linkage.h" 1
# 7 "./include/linux/export.h" 2
# 8 "./include/linux/linkage.h" 2
# 1 "./arch/arm64/include/asm/linkage.h" 1
# 9 "./include/linux/linkage.h" 2
# 11 "./include/linux/preempt.h" 2
# 1 "./include/linux/cleanup.h" 1

# 1 "./include/linux/err.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/errno.h" 1
# 1 "./include/uapi/asm-generic/errno.h" 1

# 1 "./include/uapi/asm-generic/errno-base.h" 1
# 6 "./include/uapi/asm-generic/errno.h" 2
# 2 "./arch/arm64/include/generated/uapi/asm/errno.h" 2
# 9 "./include/linux/err.h" 2
# 39 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void *__attribute__((
	__warn_unused_result__)) ERR_PTR(long error)
{
	return (void *)error;
}
# 63 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) long
	__attribute__((__warn_unused_result__)) PTR_ERR(const void *ptr)
{
	return (long)ptr;
}
# 76 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
	__attribute__((__warn_unused_result__)) IS_ERR(const void *ptr)
{
	return __builtin_expect(
		!!((unsigned long)(void *)((unsigned long)ptr) >=
		   (unsigned long)-4095),
		0);
}
# 90 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
	__attribute__((__warn_unused_result__)) IS_ERR_OR_NULL(const void *ptr)
{
	return __builtin_expect(!!(!ptr), 0) ||
	       __builtin_expect(
		       !!((unsigned long)(void *)((unsigned long)ptr) >=
			  (unsigned long)-4095),
		       0);
}
# 102 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void *__attribute__((
	__warn_unused_result__)) ERR_CAST(const void *ptr)
{
	return (void *)ptr;
}
# 125 "./include/linux/err.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
	__attribute__((__warn_unused_result__)) PTR_ERR_OR_ZERO(const void *ptr)
{
	if (IS_ERR(ptr))
		return PTR_ERR(ptr);
	else
		return 0;
}
# 7 "./include/linux/cleanup.h" 2
# 1 "./include/linux/args.h" 1
# 8 "./include/linux/cleanup.h" 2
# 223 "./include/linux/cleanup.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __attribute__((__warn_unused_result__))
const volatile void *__must_check_fn(const volatile void *val)
{
	return val;
}
# 12 "./include/linux/preempt.h" 2
# 79 "./include/linux/preempt.h"
# 1 "./arch/arm64/include/asm/preempt.h" 1

# 1 "./include/linux/thread_info.h" 1
# 12 "./include/linux/thread_info.h"
# 1 "./include/linux/limits.h" 1

# 1 "./include/uapi/linux/limits.h" 1
# 6 "./include/linux/limits.h" 2

# 1 "./include/vdso/limits.h" 1
# 8 "./include/linux/limits.h" 2
# 13 "./include/linux/thread_info.h" 2
# 1 "./include/linux/bug.h" 1

# 1 "./arch/arm64/include/asm/bug.h" 1
# 12 "./arch/arm64/include/asm/bug.h"
# 1 "./arch/arm64/include/asm/asm-bug.h" 1

# 1 "./arch/arm64/include/asm/brk-imm.h" 1
# 9 "./arch/arm64/include/asm/asm-bug.h" 2
# 13 "./arch/arm64/include/asm/bug.h" 2
# 26 "./arch/arm64/include/asm/bug.h"
# 1 "./include/asm-generic/bug.h" 1

# 1 "./include/linux/instrumentation.h" 1
# 7 "./include/asm-generic/bug.h" 2
# 1 "./include/linux/once_lite.h" 1
# 8 "./include/asm-generic/bug.h" 2
# 30 "./include/asm-generic/bug.h"
# 1 "./include/linux/panic.h" 1

# 1 "./include/linux/stdarg.h" 1

typedef __builtin_va_list va_list;
# 7 "./include/linux/panic.h" 2

struct pt_regs;

extern long (*panic_blink)(int state);
__attribute__((__format__(printf, 1, 2))) void panic(const char *fmt, ...)
	__attribute__((__noreturn__)) __attribute__((__cold__));
__attribute__((__format__(printf, 1, 0))) void vpanic(const char *fmt,
						      va_list args)
	__attribute__((__noreturn__)) __attribute__((__cold__));
void nmi_panic(struct pt_regs *regs, const char *msg);
void check_panic_on_warn(const char *origin);
extern void oops_enter(void);
extern void oops_exit(void);
extern bool oops_may_print(void);

extern bool panic_triggering_all_cpu_backtrace;
extern int panic_timeout;
extern unsigned long panic_print;
extern int panic_on_oops;
extern int panic_on_warn;

extern unsigned long panic_on_taint;
extern bool panic_on_taint_nousertaint;

extern int sysctl_panic_on_stackoverflow;

extern bool crash_kexec_post_notifiers;

extern void __stack_chk_fail(void);
void abort(void);

extern atomic_t panic_cpu;

extern atomic_t panic_redirect_cpu;

bool panic_try_start(void);
void panic_reset(void);
bool panic_in_progress(void);
bool panic_on_this_cpu(void);
bool panic_on_other_cpu(void);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
set_arch_panic_timeout(int timeout, int arch_default_timeout)
{
	if (panic_timeout == arch_default_timeout)
		panic_timeout = timeout;
}
# 94 "./include/linux/panic.h"
struct taint_flag {
	char c_true;
	char c_false;
	const char *desc;
};

extern const struct taint_flag taint_flags[20];

enum lockdep_ok {
	LOCKDEP_STILL_OK,
	LOCKDEP_NOW_UNRELIABLE,
};

extern const char *print_tainted(void);
extern const char *print_tainted_verbose(void);
extern void add_taint(unsigned flag, enum lockdep_ok);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
# 31 "./include/asm-generic/bug.h" 2
# 1 "./include/linux/printk.h" 1

# 1 "./include/linux/init.h" 1

# 1 "./include/linux/build_bug.h" 1
# 6 "./include/linux/init.h" 2
# 109 "./include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

typedef int initcall_entry_t;

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) initcall_t
initcall_from_entry(initcall_entry_t *entry)
{
	return offset_to_ptr(entry);
}
# 128 "./include/linux/init.h"
extern initcall_entry_t __con_initcall_start[], __con_initcall_end[];

typedef void (*ctor_fn_t)(void);

struct file_system_type;

extern int do_one_initcall(initcall_t fn);
extern char __attribute__((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int saved_command_line_len;
extern unsigned int reset_devices;

void setup_arch(char **);
void prepare_namespace(void);
void __attribute__((__section__(".init.text"))) __attribute__((__cold__))
init_rootfs(void);

void init_IRQ(void);
void time_init(void);
void poking_init(void);
void pgtable_cache_init(void);

extern initcall_entry_t __initcall_start[];
extern initcall_entry_t __initcall0_start[];
extern initcall_entry_t __initcall1_start[];
extern initcall_entry_t __initcall2_start[];
extern initcall_entry_t __initcall3_start[];
extern initcall_entry_t __initcall4_start[];
extern initcall_entry_t __initcall5_start[];
extern initcall_entry_t __initcall6_start[];
extern initcall_entry_t __initcall7_start[];
extern initcall_entry_t __initcall_end[];

extern struct file_system_type rootfs_fs_type;

extern bool rodata_enabled;
void mark_rodata_ro(void);

extern void (*late_time_init)(void);

extern bool initcall_debug;
# 318 "./include/linux/init.h"
struct obs_kernel_param {
	const char *str;
	int (*setup_func)(char *);
	int early;
};

extern const struct obs_kernel_param __setup_start[], __setup_end[];
# 376 "./include/linux/init.h"
void __attribute__((__section__(".init.text")))
__attribute__((__cold__)) parse_early_param(void);
void __attribute__((__section__(".init.text"))) __attribute__((__cold__))
parse_early_options(char *cmdline);
# 7 "./include/linux/printk.h" 2
# 1 "./include/linux/kern_levels.h" 1
# 8 "./include/linux/printk.h" 2

# 1 "./include/linux/ratelimit_types.h" 1

# 1 "./include/linux/bits.h" 1

# 1 "./include/vdso/bits.h" 1

# 1 "./include/vdso/const.h" 1

# 1 "./include/uapi/linux/const.h" 1
# 6 "./include/vdso/const.h" 2
# 6 "./include/vdso/bits.h" 2
# 6 "./include/linux/bits.h" 2
# 1 "./include/uapi/linux/bits.h" 1
# 7 "./include/linux/bits.h" 2
# 32 "./include/linux/bits.h"
# 1 "./include/linux/overflow.h" 1

# 1 "./include/linux/const.h" 1
# 8 "./include/linux/overflow.h" 2
# 45 "./include/linux/overflow.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool __attribute__((__warn_unused_result__))
__must_check_overflow(bool overflow)
{
	return __builtin_expect(!!(overflow), 0);
}
# 330 "./include/linux/overflow.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) size_t
	__attribute__((__warn_unused_result__)) size_mul(size_t factor1,
							 size_t factor2)
{
	size_t bytes;

	if (__must_check_overflow(
		    __builtin_mul_overflow(factor1, factor2, &bytes)))
		return (~(size_t)0);

	return bytes;
}
# 349 "./include/linux/overflow.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) size_t
	__attribute__((__warn_unused_result__)) size_add(size_t addend1,
							 size_t addend2)
{
	size_t bytes;

	if (__must_check_overflow(
		    __builtin_add_overflow(addend1, addend2, &bytes)))
		return (~(size_t)0);

	return bytes;
}
# 370 "./include/linux/overflow.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) size_t
	__attribute__((__warn_unused_result__)) size_sub(size_t minuend,
							 size_t subtrahend)
{
	size_t bytes;

	if (minuend == (~(size_t)0) || subtrahend == (~(size_t)0) ||
	    __must_check_overflow(
		    __builtin_sub_overflow(minuend, subtrahend, &bytes)))
		return (~(size_t)0);

	return bytes;
}
# 33 "./include/linux/bits.h" 2
# 6 "./include/linux/ratelimit_types.h" 2
# 1 "./include/uapi/linux/param.h" 1

# 1 "./arch/arm64/include/uapi/asm/param.h" 1
# 22 "./arch/arm64/include/uapi/asm/param.h"
# 1 "./include/asm-generic/param.h" 1

# 1 "./include/uapi/asm-generic/param.h" 1
# 6 "./include/asm-generic/param.h" 2
# 23 "./arch/arm64/include/uapi/asm/param.h" 2
# 6 "./include/uapi/linux/param.h" 2
# 7 "./include/linux/ratelimit_types.h" 2
# 1 "./include/linux/spinlock_types_raw.h" 1

# 1 "./arch/arm64/include/asm/spinlock_types.h" 1
# 12 "./arch/arm64/include/asm/spinlock_types.h"
# 1 "./include/asm-generic/qspinlock_types.h" 1
# 14 "./include/asm-generic/qspinlock_types.h"
typedef struct qspinlock {
	union {
		atomic_t val;

		struct {
			u8 locked;
			u8 pending;
		};
		struct {
			u16 locked_pending;
			u16 tail;
		};
# 43 "./include/asm-generic/qspinlock_types.h"
	};
} arch_spinlock_t;
# 13 "./arch/arm64/include/asm/spinlock_types.h" 2
# 1 "./include/asm-generic/qrwlock_types.h" 1

# 1 "./arch/arm64/include/uapi/asm/byteorder.h" 1
# 23 "./arch/arm64/include/uapi/asm/byteorder.h"
# 1 "./include/linux/byteorder/little_endian.h" 1

# 1 "./include/uapi/linux/byteorder/little_endian.h" 1
# 14 "./include/uapi/linux/byteorder/little_endian.h"
# 1 "./include/linux/swab.h" 1

# 1 "./include/uapi/linux/swab.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/swab.h" 1
# 1 "./include/uapi/asm-generic/swab.h" 1
# 2 "./arch/arm64/include/generated/uapi/asm/swab.h" 2
# 9 "./include/uapi/linux/swab.h" 2
# 48 "./include/uapi/linux/swab.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__const__)) __u16 __fswab16(__u16 val)
{
	return ((__u16)((((__u16)(val) & (__u16)0x00ffU) << 8) |
			(((__u16)(val) & (__u16)0xff00U) >> 8)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __attribute__((__const__)) __u32
__fswab32(__u32 val)
{
	return ((__u32)((((__u32)(val) & (__u32)0x000000ffUL) << 24) |
			(((__u32)(val) & (__u32)0x0000ff00UL) << 8) |
			(((__u32)(val) & (__u32)0x00ff0000UL) >> 8) |
			(((__u32)(val) & (__u32)0xff000000UL) >> 24)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __attribute__((__const__)) __u64
__fswab64(__u64 val)
{
	return ((__u64)((((__u64)(val) & (__u64)0x00000000000000ffULL) << 56) |
			(((__u64)(val) & (__u64)0x000000000000ff00ULL) << 40) |
			(((__u64)(val) & (__u64)0x0000000000ff0000ULL) << 24) |
			(((__u64)(val) & (__u64)0x00000000ff000000ULL) << 8) |
			(((__u64)(val) & (__u64)0x000000ff00000000ULL) >> 8) |
			(((__u64)(val) & (__u64)0x0000ff0000000000ULL) >> 24) |
			(((__u64)(val) & (__u64)0x00ff000000000000ULL) >> 40) |
			(((__u64)(val) & (__u64)0xff00000000000000ULL) >> 56)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __attribute__((__const__)) __u32
__fswahw32(__u32 val)
{
	return ((__u32)((((__u32)(val) & (__u32)0x0000ffffUL) << 16) |
			(((__u32)(val) & (__u32)0xffff0000UL) >> 16)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __attribute__((__const__)) __u32
__fswahb32(__u32 val)
{
	return ((__u32)((((__u32)(val) & (__u32)0x00ff00ffUL) << 8) |
			(((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));
}
# 136 "./include/uapi/linux/swab.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long __swab(const unsigned long y)
{
	return (__u64)(__builtin_constant_p(y) ?
			       ((__u64)((((__u64)(y) &
					  (__u64)0x00000000000000ffULL)
					 << 56) |
					(((__u64)(y) &
					  (__u64)0x000000000000ff00ULL)
					 << 40) |
					(((__u64)(y) &
					  (__u64)0x0000000000ff0000ULL)
					 << 24) |
					(((__u64)(y) &
					  (__u64)0x00000000ff000000ULL)
					 << 8) |
					(((__u64)(y) &
					  (__u64)0x000000ff00000000ULL) >>
					 8) |
					(((__u64)(y) &
					  (__u64)0x0000ff0000000000ULL) >>
					 24) |
					(((__u64)(y) &
					  (__u64)0x00ff000000000000ULL) >>
					 40) |
					(((__u64)(y) &
					  (__u64)0xff00000000000000ULL) >>
					 56))) :
			       __fswab64(y));
}
# 171 "./include/uapi/linux/swab.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u16 __swab16p(const __u16 *p)
{
	return (__u16)(__builtin_constant_p(*p) ?
			       ((__u16)((((__u16)(*p) & (__u16)0x00ffU) << 8) |
					(((__u16)(*p) & (__u16)0xff00U) >> 8))) :
			       __fswab16(*p));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u32
__swab32p(const __u32 *p)
{
	return (__u32)(__builtin_constant_p(*p) ?
			       ((__u32)((((__u32)(*p) & (__u32)0x000000ffUL)
					 << 24) |
					(((__u32)(*p) & (__u32)0x0000ff00UL)
					 << 8) |
					(((__u32)(*p) & (__u32)0x00ff0000UL) >>
					 8) |
					(((__u32)(*p) & (__u32)0xff000000UL) >>
					 24))) :
			       __fswab32(*p));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u64
__swab64p(const __u64 *p)
{
	return (__u64)(__builtin_constant_p(*p) ?
			       ((__u64)((((__u64)(*p) &
					  (__u64)0x00000000000000ffULL)
					 << 56) |
					(((__u64)(*p) &
					  (__u64)0x000000000000ff00ULL)
					 << 40) |
					(((__u64)(*p) &
					  (__u64)0x0000000000ff0000ULL)
					 << 24) |
					(((__u64)(*p) &
					  (__u64)0x00000000ff000000ULL)
					 << 8) |
					(((__u64)(*p) &
					  (__u64)0x000000ff00000000ULL) >>
					 8) |
					(((__u64)(*p) &
					  (__u64)0x0000ff0000000000ULL) >>
					 24) |
					(((__u64)(*p) &
					  (__u64)0x00ff000000000000ULL) >>
					 40) |
					(((__u64)(*p) &
					  (__u64)0xff00000000000000ULL) >>
					 56))) :
			       __fswab64(*p));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u32
__swahw32p(const __u32 *p)
{
	return (__builtin_constant_p((__u32)(*p)) ?
			((__u32)((((__u32)(*p) & (__u32)0x0000ffffUL) << 16) |
				 (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) :
			__fswahw32(*p));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u32
__swahb32p(const __u32 *p)
{
	return (__builtin_constant_p((__u32)(*p)) ?
			((__u32)((((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) |
				 (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) :
			__fswahb32(*p));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__swab16s(__u16 *p)
{
	*p = __swab16p(p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__swab32s(__u32 *p)
{
	*p = __swab32p(p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__swab64s(__u64 *p)
{
	*p = __swab64p(p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__swahw32s(__u32 *p)
{
	*p = __swahw32p(p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__swahb32s(__u32 *p)
{
	*p = __swahb32p(p);
}
# 6 "./include/linux/swab.h" 2
# 24 "./include/linux/swab.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
swab16_array(u16 *buf, unsigned int words)
{
	while (words--) {
		__swab16s(buf);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
swab32_array(u32 *buf, unsigned int words)
{
	while (words--) {
		__swab32s(buf);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
swab64_array(u64 *buf, unsigned int words)
{
	while (words--) {
		__swab64s(buf);
		buf++;
	}
}
# 15 "./include/uapi/linux/byteorder/little_endian.h" 2
# 45 "./include/uapi/linux/byteorder/little_endian.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le64 __cpu_to_le64p(const __u64 *p)
{
	return (__le64)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u64
__le64_to_cpup(const __le64 *p)
{
	return (__u64)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le32
__cpu_to_le32p(const __u32 *p)
{
	return (__le32)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u32
__le32_to_cpup(const __le32 *p)
{
	return (__u32)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le16
__cpu_to_le16p(const __u16 *p)
{
	return (__le16)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u16
__le16_to_cpup(const __le16 *p)
{
	return (__u16)*p;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be64
__cpu_to_be64p(const __u64 *p)
{
	return (__be64)__swab64p(p);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u64
__be64_to_cpup(const __be64 *p)
{
	return __swab64p((__u64 *)p);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be32
__cpu_to_be32p(const __u32 *p)
{
	return (__be32)__swab32p(p);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u32
__be32_to_cpup(const __be32 *p)
{
	return __swab32p((__u32 *)p);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be16
__cpu_to_be16p(const __u16 *p)
{
	return (__be16)__swab16p(p);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u16
__be16_to_cpup(const __be16 *p)
{
	return __swab16p((__u16 *)p);
}
# 6 "./include/linux/byteorder/little_endian.h" 2

# 1 "./include/linux/byteorder/generic.h" 1
# 144 "./include/linux/byteorder/generic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void le16_add_cpu(__le16 *var,
								  u16 val)
{
	*var = ((__le16)(__u16)(((__u16)(__le16)(*var)) + val));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
le32_add_cpu(__le32 *var, u32 val)
{
	*var = ((__le32)(__u32)(((__u32)(__le32)(*var)) + val));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
le64_add_cpu(__le64 *var, u64 val)
{
	*var = ((__le64)(__u64)(((__u64)(__le64)(*var)) + val));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
le32_to_cpu_array(u32 *buf, unsigned int words)
{
	while (words--) {
		do {
			(void)(buf);
		} while (0);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
cpu_to_le32_array(u32 *buf, unsigned int words)
{
	while (words--) {
		do {
			(void)(buf);
		} while (0);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
le64_to_cpu_array(u64 *buf, unsigned int words)
{
	while (words--) {
		do {
			(void)(buf);
		} while (0);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
cpu_to_le64_array(u64 *buf, unsigned int words)
{
	while (words--) {
		do {
			(void)(buf);
		} while (0);
		buf++;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
memcpy_from_le32(u32 *dst, const __le32 *src, size_t words)
{
	size_t i;

	for (i = 0; i < words; i++)
		dst[i] = ((__u32)(__le32)(src[i]));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
memcpy_to_le32(__le32 *dst, const u32 *src, size_t words)
{
	size_t i;

	for (i = 0; i < words; i++)
		dst[i] = ((__le32)(__u32)(src[i]));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
be16_add_cpu(__be16 *var, u16 val)
{
	*var = ((
		__be16)(__u16)(__builtin_constant_p((
				       (__u16)(__builtin_constant_p(
						       (__u16)(__be16)(*var)) ?
						       ((__u16)((((__u16)((
									  __u16)(__be16)(*var)) &
								  (__u16)0x00ffU)
								 << 8) |
								(((__u16)((
									  __u16)(__be16)(*var)) &
								  (__u16)0xff00U) >>
								 8))) :
						       __fswab16((
							       __u16)(__be16)(*var))) +
				       val)) ?
				       ((__u16)((((__u16)((
							  (__u16)(__builtin_constant_p((
									  __u16)(__be16)(*var)) ?
									  ((__u16)((((__u16)((
											     __u16)(__be16)(*var)) &
										     (__u16)0x00ffU)
										    << 8) |
										   (((__u16)((
											     __u16)(__be16)(*var)) &
										     (__u16)0xff00U) >>
										    8))) :
									  __fswab16((
										  __u16)(__be16)(*var))) +
							  val)) &
						  (__u16)0x00ffU)
						 << 8) |
						(((__u16)((
							  (__u16)(__builtin_constant_p((
									  __u16)(__be16)(*var)) ?
									  ((__u16)((((__u16)((
											     __u16)(__be16)(*var)) &
										     (__u16)0x00ffU)
										    << 8) |
										   (((__u16)((
											     __u16)(__be16)(*var)) &
										     (__u16)0xff00U) >>
										    8))) :
									  __fswab16((
										  __u16)(__be16)(*var))) +
							  val)) &
						  (__u16)0xff00U) >>
						 8))) :
				       __fswab16((
					       (__u16)(__builtin_constant_p((
							       __u16)(__be16)(*var)) ?
							       ((__u16)((((__u16)((
										  __u16)(__be16)(*var)) &
									  (__u16)0x00ffU)
									 << 8) |
									(((__u16)((
										  __u16)(__be16)(*var)) &
									  (__u16)0xff00U) >>
									 8))) :
							       __fswab16((
								       __u16)(__be16)(*var))) +
					       val))));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
be32_add_cpu(__be32 *var, u32 val)
{
	*var = ((
		__be32)(__u32)(__builtin_constant_p((
				       (__u32)(__builtin_constant_p(
						       (__u32)(__be32)(*var)) ?
						       ((__u32)((((__u32)((
									  __u32)(__be32)(*var)) &
								  (__u32)0x000000ffUL)
								 << 24) |
								(((__u32)((
									  __u32)(__be32)(*var)) &
								  (__u32)0x0000ff00UL)
								 << 8) |
								(((__u32)((
									  __u32)(__be32)(*var)) &
								  (__u32)0x00ff0000UL) >>
								 8) |
								(((__u32)((
									  __u32)(__be32)(*var)) &
								  (__u32)0xff000000UL) >>
								 24))) :
						       __fswab32((
							       __u32)(__be32)(*var))) +
				       val)) ?
				       ((__u32)((((__u32)((
							  (__u32)(__builtin_constant_p((
									  __u32)(__be32)(*var)) ?
									  ((__u32)((((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x000000ffUL)
										    << 24) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x0000ff00UL)
										    << 8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x00ff0000UL) >>
										    8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0xff000000UL) >>
										    24))) :
									  __fswab32((
										  __u32)(__be32)(*var))) +
							  val)) &
						  (__u32)0x000000ffUL)
						 << 24) |
						(((__u32)((
							  (__u32)(__builtin_constant_p((
									  __u32)(__be32)(*var)) ?
									  ((__u32)((((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x000000ffUL)
										    << 24) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x0000ff00UL)
										    << 8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x00ff0000UL) >>
										    8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0xff000000UL) >>
										    24))) :
									  __fswab32((
										  __u32)(__be32)(*var))) +
							  val)) &
						  (__u32)0x0000ff00UL)
						 << 8) |
						(((__u32)((
							  (__u32)(__builtin_constant_p((
									  __u32)(__be32)(*var)) ?
									  ((__u32)((((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x000000ffUL)
										    << 24) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x0000ff00UL)
										    << 8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x00ff0000UL) >>
										    8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0xff000000UL) >>
										    24))) :
									  __fswab32((
										  __u32)(__be32)(*var))) +
							  val)) &
						  (__u32)0x00ff0000UL) >>
						 8) |
						(((__u32)((
							  (__u32)(__builtin_constant_p((
									  __u32)(__be32)(*var)) ?
									  ((__u32)((((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x000000ffUL)
										    << 24) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x0000ff00UL)
										    << 8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0x00ff0000UL) >>
										    8) |
										   (((__u32)((
											     __u32)(__be32)(*var)) &
										     (__u32)0xff000000UL) >>
										    24))) :
									  __fswab32((
										  __u32)(__be32)(*var))) +
							  val)) &
						  (__u32)0xff000000UL) >>
						 24))) :
				       __fswab32((
					       (__u32)(__builtin_constant_p((
							       __u32)(__be32)(*var)) ?
							       ((__u32)((((__u32)((
										  __u32)(__be32)(*var)) &
									  (__u32)0x000000ffUL)
									 << 24) |
									(((__u32)((
										  __u32)(__be32)(*var)) &
									  (__u32)0x0000ff00UL)
									 << 8) |
									(((__u32)((
										  __u32)(__be32)(*var)) &
									  (__u32)0x00ff0000UL) >>
									 8) |
									(((__u32)((
										  __u32)(__be32)(*var)) &
									  (__u32)0xff000000UL) >>
									 24))) :
							       __fswab32((
								       __u32)(__be32)(*var))) +
					       val))));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
be64_add_cpu(__be64 *var, u64 val)
{
	*var = ((
		__be64)(__u64)(__builtin_constant_p((
				       (__u64)(__builtin_constant_p(
						       (__u64)(__be64)(*var)) ?
						       ((__u64)((((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x00000000000000ffULL)
								 << 56) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x000000000000ff00ULL)
								 << 40) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x0000000000ff0000ULL)
								 << 24) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x00000000ff000000ULL)
								 << 8) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x000000ff00000000ULL) >>
								 8) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x0000ff0000000000ULL) >>
								 24) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0x00ff000000000000ULL) >>
								 40) |
								(((__u64)((
									  __u64)(__be64)(*var)) &
								  (__u64)0xff00000000000000ULL) >>
								 56))) :
						       __fswab64((
							       __u64)(__be64)(*var))) +
				       val)) ?
				       ((__u64)((((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x00000000000000ffULL)
						 << 56) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x000000000000ff00ULL)
						 << 40) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x0000000000ff0000ULL)
						 << 24) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x00000000ff000000ULL)
						 << 8) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x000000ff00000000ULL) >>
						 8) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x0000ff0000000000ULL) >>
						 24) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0x00ff000000000000ULL) >>
						 40) |
						(((__u64)((
							  (__u64)(__builtin_constant_p((
									  __u64)(__be64)(*var)) ?
									  ((__u64)((((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000000000ffULL)
										    << 56) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000000000ff00ULL)
										    << 40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000000000ff0000ULL)
										    << 24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00000000ff000000ULL)
										    << 8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x000000ff00000000ULL) >>
										    8) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x0000ff0000000000ULL) >>
										    24) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0x00ff000000000000ULL) >>
										    40) |
										   (((__u64)((
											     __u64)(__be64)(*var)) &
										     (__u64)0xff00000000000000ULL) >>
										    56))) :
									  __fswab64((
										  __u64)(__be64)(*var))) +
							  val)) &
						  (__u64)0xff00000000000000ULL) >>
						 56))) :
				       __fswab64((
					       (__u64)(__builtin_constant_p((
							       __u64)(__be64)(*var)) ?
							       ((__u64)((((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x00000000000000ffULL)
									 << 56) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x000000000000ff00ULL)
									 << 40) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x0000000000ff0000ULL)
									 << 24) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x00000000ff000000ULL)
									 << 8) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x000000ff00000000ULL) >>
									 8) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x0000ff0000000000ULL) >>
									 24) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0x00ff000000000000ULL) >>
									 40) |
									(((__u64)((
										  __u64)(__be64)(*var)) &
									  (__u64)0xff00000000000000ULL) >>
									 56))) :
							       __fswab64((
								       __u64)(__be64)(*var))) +
					       val))));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
cpu_to_be32_array(__be32 *dst, const u32 *src, size_t len)
{
	size_t i;

	for (i = 0; i < len; i++)
		dst[i] = ((
			__be32)(__u32)(__builtin_constant_p((src[i])) ?
					       ((__u32)((((__u32)((src[i])) &
							  (__u32)0x000000ffUL)
							 << 24) |
							(((__u32)((src[i])) &
							  (__u32)0x0000ff00UL)
							 << 8) |
							(((__u32)((src[i])) &
							  (__u32)0x00ff0000UL) >>
							 8) |
							(((__u32)((src[i])) &
							  (__u32)0xff000000UL) >>
							 24))) :
					       __fswab32((src[i]))));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
be32_to_cpu_array(u32 *dst, const __be32 *src, size_t len)
{
	size_t i;

	for (i = 0; i < len; i++)
		dst[i] =
			(__u32)(__builtin_constant_p((__u32)(__be32)(src[i])) ?
					((__u32)((((__u32)((
							   __u32)(__be32)(src[i])) &
						   (__u32)0x000000ffUL)
						  << 24) |
						 (((__u32)((
							   __u32)(__be32)(src[i])) &
						   (__u32)0x0000ff00UL)
						  << 8) |
						 (((__u32)((
							   __u32)(__be32)(src[i])) &
						   (__u32)0x00ff0000UL) >>
						  8) |
						 (((__u32)((
							   __u32)(__be32)(src[i])) &
						   (__u32)0xff000000UL) >>
						  24))) :
					__fswab32((__u32)(__be32)(src[i])));
}
# 12 "./include/linux/byteorder/little_endian.h" 2
# 24 "./arch/arm64/include/uapi/asm/byteorder.h" 2
# 7 "./include/asm-generic/qrwlock_types.h" 2
# 1 "./arch/arm64/include/asm/spinlock_types.h" 1
# 8 "./include/asm-generic/qrwlock_types.h" 2

typedef struct qrwlock {
	union {
		atomic_t cnts;
		struct {
			u8 wlocked;
			u8 __lstate[3];
		};
	};
	arch_spinlock_t wait_lock;
} arch_rwlock_t;
# 14 "./arch/arm64/include/asm/spinlock_types.h" 2
# 8 "./include/linux/spinlock_types_raw.h" 2

# 1 "./include/linux/lockdep_types.h" 1
# 17 "./include/linux/lockdep_types.h"
enum lockdep_wait_type {
	LD_WAIT_INV = 0,

	LD_WAIT_FREE,
	LD_WAIT_SPIN,

	LD_WAIT_CONFIG = LD_WAIT_SPIN,

	LD_WAIT_SLEEP,

	LD_WAIT_MAX,
};

enum lockdep_lock_type {
	LD_LOCK_NORMAL = 0,
	LD_LOCK_PERCPU,
	LD_LOCK_WAIT_OVERRIDE,
	LD_LOCK_MAX,
};
# 264 "./include/linux/lockdep_types.h"
struct lock_class_key {};

struct lockdep_map {};

struct pin_cookie {};
# 13 "./include/linux/spinlock_types_raw.h" 2

struct raw_spinlock {
	arch_spinlock_t raw_lock;
};
typedef struct raw_spinlock raw_spinlock_t;
# 8 "./include/linux/ratelimit_types.h" 2

struct ratelimit_state {
	raw_spinlock_t lock;

	int interval;
	int burst;
	atomic_t rs_n_left;
	atomic_t missed;
	unsigned int flags;
	unsigned long begin;
};
# 45 "./include/linux/ratelimit_types.h"
extern int ___ratelimit(struct ratelimit_state *rs, const char *func);
# 10 "./include/linux/printk.h" 2

struct console;

extern const char linux_banner[];
extern const char linux_proc_banner[];

extern int oops_in_progress;

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
printk_get_level(const char *buffer)
{
	if (buffer[0] == '\001' && buffer[1]) {
		switch (buffer[1]) {
		case '0' ... '7':
		case 'c':
			return buffer[1];
		}
	}
	return 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) const char *
printk_skip_level(const char *buffer)
{
	if (printk_get_level(buffer))
		return buffer + 2;

	return buffer;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) const char *
printk_skip_headers(const char *buffer)
{
	while (printk_get_level(buffer))
		buffer = printk_skip_level(buffer);

	return buffer;
}
# 65 "./include/linux/printk.h"
int match_devname_and_update_preferred_console(const char *match,
					       const char *name,
					       const short idx);

extern int console_printk[];

extern void console_verbose(void);

extern char devkmsg_log_str[10];

extern int suppress_printk;

struct va_format {
	const char *fmt;
	va_list *va;
};
# 142 "./include/linux/printk.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__format__(printf, 1, 2)))
__attribute__((__cold__)) void early_printk(const char *s, ...)
{
}

struct dev_printk_info;

__attribute__((__format__(printf, 4, 0))) int
vprintk_emit(int facility, int level, const struct dev_printk_info *dev_info,
	     const char *fmt, va_list args);

__attribute__((__format__(printf, 1, 0))) int vprintk(const char *fmt,
						      va_list args);
__attribute__((__format__(printf, 1, 0))) int vprintk_deferred(const char *fmt,
							       va_list args);

__attribute__((__format__(printf, 1, 2))) __attribute__((__cold__)) int
_printk(const char *fmt, ...);

__attribute__((__format__(printf, 1, 2))) __attribute__((__cold__)) int
_printk_deferred(const char *fmt, ...);

extern void __printk_deferred_enter(void);
extern void __printk_deferred_exit(void);

extern void printk_force_console_enter(void);
extern void printk_force_console_exit(void);
# 186 "./include/linux/printk.h"
extern int __printk_ratelimit(const char *func);

extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
				   unsigned int interval_msec);

extern int printk_delay_msec;
extern int dmesg_restrict;

extern void wake_up_klogd(void);

char *log_buf_addr_get(void);
u32 log_buf_len_get(void);
void log_buf_vmcoreinfo_setup(void);
void __attribute__((__section__(".init.text"))) __attribute__((__cold__))
setup_log_buf(int early);
__attribute__((__format__(printf, 1, 2))) void
dump_stack_set_arch_desc(const char *fmt, ...);
void dump_stack_print_info(const char *log_lvl);
void show_regs_print_info(const char *log_lvl);
extern void dump_stack_lvl(const char *log_lvl) __attribute__((__cold__));
extern void dump_stack(void) __attribute__((__cold__));
void printk_trigger_flush(void);
void console_try_replay_all(void);
void printk_legacy_allow_panic_sync(void);
extern bool nbcon_device_try_acquire(struct console *con);
extern void nbcon_device_release(struct console *con);
void nbcon_atomic_flush_unsafe(void);
bool pr_flush(int timeout_ms, bool reset_on_progress);
# 333 "./include/linux/printk.h"
extern int __printk_cpu_sync_try_get(void);
extern void __printk_cpu_sync_wait(void);
extern void __printk_cpu_sync_put(void);
# 385 "./include/linux/printk.h"
extern int kptr_restrict;
# 404 "./include/linux/printk.h"
struct module;
# 620 "./include/linux/printk.h"
# 1 "./include/linux/dynamic_debug.h" 1

# 1 "./include/linux/jump_label.h" 1
# 80 "./include/linux/jump_label.h"
extern bool static_key_initialized;

struct static_key {
	atomic_t enabled;

	union {
		unsigned long type;
		struct jump_entry *entries;
		struct static_key_mod *next;
	};
};

# 1 "./arch/arm64/include/asm/jump_label.h" 1
# 14 "./arch/arm64/include/asm/jump_label.h"
# 1 "./arch/arm64/include/asm/insn.h" 1
# 13 "./arch/arm64/include/asm/insn.h"
# 1 "./arch/arm64/include/asm/insn-def.h" 1
# 14 "./arch/arm64/include/asm/insn.h" 2

enum aarch64_insn_hint_cr_op {
	AARCH64_INSN_HINT_NOP = 0x0 << 5,
	AARCH64_INSN_HINT_YIELD = 0x1 << 5,
	AARCH64_INSN_HINT_WFE = 0x2 << 5,
	AARCH64_INSN_HINT_WFI = 0x3 << 5,
	AARCH64_INSN_HINT_SEV = 0x4 << 5,
	AARCH64_INSN_HINT_SEVL = 0x5 << 5,

	AARCH64_INSN_HINT_XPACLRI = 0x07 << 5,
	AARCH64_INSN_HINT_PACIA_1716 = 0x08 << 5,
	AARCH64_INSN_HINT_PACIB_1716 = 0x0A << 5,
	AARCH64_INSN_HINT_AUTIA_1716 = 0x0C << 5,
	AARCH64_INSN_HINT_AUTIB_1716 = 0x0E << 5,
	AARCH64_INSN_HINT_PACIAZ = 0x18 << 5,
	AARCH64_INSN_HINT_PACIASP = 0x19 << 5,
	AARCH64_INSN_HINT_PACIBZ = 0x1A << 5,
	AARCH64_INSN_HINT_PACIBSP = 0x1B << 5,
	AARCH64_INSN_HINT_AUTIAZ = 0x1C << 5,
	AARCH64_INSN_HINT_AUTIASP = 0x1D << 5,
	AARCH64_INSN_HINT_AUTIBZ = 0x1E << 5,
	AARCH64_INSN_HINT_AUTIBSP = 0x1F << 5,

	AARCH64_INSN_HINT_ESB = 0x10 << 5,
	AARCH64_INSN_HINT_PSB = 0x11 << 5,
	AARCH64_INSN_HINT_TSB = 0x12 << 5,
	AARCH64_INSN_HINT_CSDB = 0x14 << 5,
	AARCH64_INSN_HINT_CLEARBHB = 0x16 << 5,

	AARCH64_INSN_HINT_BTI = 0x20 << 5,
	AARCH64_INSN_HINT_BTIC = 0x22 << 5,
	AARCH64_INSN_HINT_BTIJ = 0x24 << 5,
	AARCH64_INSN_HINT_BTIJC = 0x26 << 5,
};

enum aarch64_insn_imm_type {
	AARCH64_INSN_IMM_ADR,
	AARCH64_INSN_IMM_26,
	AARCH64_INSN_IMM_19,
	AARCH64_INSN_IMM_16,
	AARCH64_INSN_IMM_14,
	AARCH64_INSN_IMM_12,
	AARCH64_INSN_IMM_9,
	AARCH64_INSN_IMM_7,
	AARCH64_INSN_IMM_6,
	AARCH64_INSN_IMM_S,
	AARCH64_INSN_IMM_R,
	AARCH64_INSN_IMM_N,
	AARCH64_INSN_IMM_MAX
};

enum aarch64_insn_register_type {
	AARCH64_INSN_REGTYPE_RT,
	AARCH64_INSN_REGTYPE_RN,
	AARCH64_INSN_REGTYPE_RT2,
	AARCH64_INSN_REGTYPE_RM,
	AARCH64_INSN_REGTYPE_RD,
	AARCH64_INSN_REGTYPE_RA,
	AARCH64_INSN_REGTYPE_RS,
};

enum aarch64_insn_register {
	AARCH64_INSN_REG_0 = 0,
	AARCH64_INSN_REG_1 = 1,
	AARCH64_INSN_REG_2 = 2,
	AARCH64_INSN_REG_3 = 3,
	AARCH64_INSN_REG_4 = 4,
	AARCH64_INSN_REG_5 = 5,
	AARCH64_INSN_REG_6 = 6,
	AARCH64_INSN_REG_7 = 7,
	AARCH64_INSN_REG_8 = 8,
	AARCH64_INSN_REG_9 = 9,
	AARCH64_INSN_REG_10 = 10,
	AARCH64_INSN_REG_11 = 11,
	AARCH64_INSN_REG_12 = 12,
	AARCH64_INSN_REG_13 = 13,
	AARCH64_INSN_REG_14 = 14,
	AARCH64_INSN_REG_15 = 15,
	AARCH64_INSN_REG_16 = 16,
	AARCH64_INSN_REG_17 = 17,
	AARCH64_INSN_REG_18 = 18,
	AARCH64_INSN_REG_19 = 19,
	AARCH64_INSN_REG_20 = 20,
	AARCH64_INSN_REG_21 = 21,
	AARCH64_INSN_REG_22 = 22,
	AARCH64_INSN_REG_23 = 23,
	AARCH64_INSN_REG_24 = 24,
	AARCH64_INSN_REG_25 = 25,
	AARCH64_INSN_REG_26 = 26,
	AARCH64_INSN_REG_27 = 27,
	AARCH64_INSN_REG_28 = 28,
	AARCH64_INSN_REG_29 = 29,
	AARCH64_INSN_REG_FP = 29,
	AARCH64_INSN_REG_30 = 30,
	AARCH64_INSN_REG_LR = 30,
	AARCH64_INSN_REG_ZR = 31,
	AARCH64_INSN_REG_SP = 31
};

enum aarch64_insn_special_register {
	AARCH64_INSN_SPCLREG_SPSR_EL1 = 0xC200,
	AARCH64_INSN_SPCLREG_ELR_EL1 = 0xC201,
	AARCH64_INSN_SPCLREG_SP_EL0 = 0xC208,
	AARCH64_INSN_SPCLREG_SPSEL = 0xC210,
	AARCH64_INSN_SPCLREG_CURRENTEL = 0xC212,
	AARCH64_INSN_SPCLREG_DAIF = 0xDA11,
	AARCH64_INSN_SPCLREG_NZCV = 0xDA10,
	AARCH64_INSN_SPCLREG_FPCR = 0xDA20,
	AARCH64_INSN_SPCLREG_DSPSR_EL0 = 0xDA28,
	AARCH64_INSN_SPCLREG_DLR_EL0 = 0xDA29,
	AARCH64_INSN_SPCLREG_SPSR_EL2 = 0xE200,
	AARCH64_INSN_SPCLREG_ELR_EL2 = 0xE201,
	AARCH64_INSN_SPCLREG_SP_EL1 = 0xE208,
	AARCH64_INSN_SPCLREG_SPSR_INQ = 0xE218,
	AARCH64_INSN_SPCLREG_SPSR_ABT = 0xE219,
	AARCH64_INSN_SPCLREG_SPSR_UND = 0xE21A,
	AARCH64_INSN_SPCLREG_SPSR_FIQ = 0xE21B,
	AARCH64_INSN_SPCLREG_SPSR_EL3 = 0xF200,
	AARCH64_INSN_SPCLREG_ELR_EL3 = 0xF201,
	AARCH64_INSN_SPCLREG_SP_EL2 = 0xF210
};

enum aarch64_insn_system_register {
	AARCH64_INSN_SYSREG_TPIDR_EL1 = 0x4684,
	AARCH64_INSN_SYSREG_TPIDR_EL2 = 0x6682,
	AARCH64_INSN_SYSREG_SP_EL0 = 0x4208,
};

enum aarch64_insn_variant {
	AARCH64_INSN_VARIANT_32BIT,
	AARCH64_INSN_VARIANT_64BIT
};

enum aarch64_insn_condition {
	AARCH64_INSN_COND_EQ = 0x0,
	AARCH64_INSN_COND_NE = 0x1,
	AARCH64_INSN_COND_CS = 0x2,
	AARCH64_INSN_COND_CC = 0x3,
	AARCH64_INSN_COND_MI = 0x4,
	AARCH64_INSN_COND_PL = 0x5,
	AARCH64_INSN_COND_VS = 0x6,
	AARCH64_INSN_COND_VC = 0x7,
	AARCH64_INSN_COND_HI = 0x8,
	AARCH64_INSN_COND_LS = 0x9,
	AARCH64_INSN_COND_GE = 0xa,
	AARCH64_INSN_COND_LT = 0xb,
	AARCH64_INSN_COND_GT = 0xc,
	AARCH64_INSN_COND_LE = 0xd,
	AARCH64_INSN_COND_AL = 0xe,
};

enum aarch64_insn_branch_type {
	AARCH64_INSN_BRANCH_NOLINK,
	AARCH64_INSN_BRANCH_LINK,
	AARCH64_INSN_BRANCH_RETURN,
	AARCH64_INSN_BRANCH_COMP_ZERO,
	AARCH64_INSN_BRANCH_COMP_NONZERO,
};

enum aarch64_insn_size_type {
	AARCH64_INSN_SIZE_8,
	AARCH64_INSN_SIZE_16,
	AARCH64_INSN_SIZE_32,
	AARCH64_INSN_SIZE_64,
};

enum aarch64_insn_ldst_type {
	AARCH64_INSN_LDST_LOAD_REG_OFFSET,
	AARCH64_INSN_LDST_STORE_REG_OFFSET,
	AARCH64_INSN_LDST_LOAD_IMM_OFFSET,
	AARCH64_INSN_LDST_STORE_IMM_OFFSET,
	AARCH64_INSN_LDST_LOAD_PAIR_PRE_INDEX,
	AARCH64_INSN_LDST_STORE_PAIR_PRE_INDEX,
	AARCH64_INSN_LDST_LOAD_PAIR_POST_INDEX,
	AARCH64_INSN_LDST_STORE_PAIR_POST_INDEX,
	AARCH64_INSN_LDST_LOAD_ACQ,
	AARCH64_INSN_LDST_LOAD_EX,
	AARCH64_INSN_LDST_LOAD_ACQ_EX,
	AARCH64_INSN_LDST_STORE_REL,
	AARCH64_INSN_LDST_STORE_EX,
	AARCH64_INSN_LDST_STORE_REL_EX,
	AARCH64_INSN_LDST_SIGNED_LOAD_IMM_OFFSET,
	AARCH64_INSN_LDST_SIGNED_LOAD_REG_OFFSET,
};

enum aarch64_insn_adsb_type {
	AARCH64_INSN_ADSB_ADD,
	AARCH64_INSN_ADSB_SUB,
	AARCH64_INSN_ADSB_ADD_SETFLAGS,
	AARCH64_INSN_ADSB_SUB_SETFLAGS
};

enum aarch64_insn_movewide_type {
	AARCH64_INSN_MOVEWIDE_ZERO,
	AARCH64_INSN_MOVEWIDE_KEEP,
	AARCH64_INSN_MOVEWIDE_INVERSE
};

enum aarch64_insn_bitfield_type {
	AARCH64_INSN_BITFIELD_MOVE,
	AARCH64_INSN_BITFIELD_MOVE_UNSIGNED,
	AARCH64_INSN_BITFIELD_MOVE_SIGNED
};

enum aarch64_insn_data1_type {
	AARCH64_INSN_DATA1_REVERSE_16,
	AARCH64_INSN_DATA1_REVERSE_32,
	AARCH64_INSN_DATA1_REVERSE_64,
};

enum aarch64_insn_data2_type {
	AARCH64_INSN_DATA2_UDIV,
	AARCH64_INSN_DATA2_SDIV,
	AARCH64_INSN_DATA2_LSLV,
	AARCH64_INSN_DATA2_LSRV,
	AARCH64_INSN_DATA2_ASRV,
	AARCH64_INSN_DATA2_RORV,
};

enum aarch64_insn_data3_type {
	AARCH64_INSN_DATA3_MADD,
	AARCH64_INSN_DATA3_MSUB,
};

enum aarch64_insn_logic_type {
	AARCH64_INSN_LOGIC_AND,
	AARCH64_INSN_LOGIC_BIC,
	AARCH64_INSN_LOGIC_ORR,
	AARCH64_INSN_LOGIC_ORN,
	AARCH64_INSN_LOGIC_EOR,
	AARCH64_INSN_LOGIC_EON,
	AARCH64_INSN_LOGIC_AND_SETFLAGS,
	AARCH64_INSN_LOGIC_BIC_SETFLAGS
};

enum aarch64_insn_prfm_type {
	AARCH64_INSN_PRFM_TYPE_PLD,
	AARCH64_INSN_PRFM_TYPE_PLI,
	AARCH64_INSN_PRFM_TYPE_PST,
};

enum aarch64_insn_prfm_target {
	AARCH64_INSN_PRFM_TARGET_L1,
	AARCH64_INSN_PRFM_TARGET_L2,
	AARCH64_INSN_PRFM_TARGET_L3,
};

enum aarch64_insn_prfm_policy {
	AARCH64_INSN_PRFM_POLICY_KEEP,
	AARCH64_INSN_PRFM_POLICY_STRM,
};

enum aarch64_insn_adr_type {
	AARCH64_INSN_ADR_TYPE_ADRP,
	AARCH64_INSN_ADR_TYPE_ADR,
};

enum aarch64_insn_mem_atomic_op {
	AARCH64_INSN_MEM_ATOMIC_ADD,
	AARCH64_INSN_MEM_ATOMIC_CLR,
	AARCH64_INSN_MEM_ATOMIC_EOR,
	AARCH64_INSN_MEM_ATOMIC_SET,
	AARCH64_INSN_MEM_ATOMIC_SWP,
};

enum aarch64_insn_mem_order_type {
	AARCH64_INSN_MEM_ORDER_NONE,
	AARCH64_INSN_MEM_ORDER_ACQ,
	AARCH64_INSN_MEM_ORDER_REL,
	AARCH64_INSN_MEM_ORDER_ACQREL,
};

enum aarch64_insn_mb_type {
	AARCH64_INSN_MB_SY,
	AARCH64_INSN_MB_ST,
	AARCH64_INSN_MB_LD,
	AARCH64_INSN_MB_ISH,
	AARCH64_INSN_MB_ISHST,
	AARCH64_INSN_MB_ISHLD,
	AARCH64_INSN_MB_NSH,
	AARCH64_INSN_MB_NSHST,
	AARCH64_INSN_MB_NSHLD,
	AARCH64_INSN_MB_OSH,
	AARCH64_INSN_MB_OSHST,
	AARCH64_INSN_MB_OSHLD,
};
# 329 "./arch/arm64/include/asm/insn.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_class_branch_sys(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_0(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x1c000000) & (0x14000000)")));
		if (!(!(~(0x1c000000) & (0x14000000))))
			__compiletime_assert_0();
	} while (0);
	return (code & (0x1c000000)) == (0x14000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_class_branch_sys_value(void)
{
	return (0x14000000);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_adr(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_1(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x9F000000) & (0x10000000)")));
		if (!(!(~(0x9F000000) & (0x10000000))))
			__compiletime_assert_1();
	} while (0);
	return (code & (0x9F000000)) == (0x10000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_adr_value(void)
{
	return (0x10000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_adrp(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_2(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x9F000000) & (0x90000000)")));
		if (!(!(~(0x9F000000) & (0x90000000))))
			__compiletime_assert_2();
	} while (0);
	return (code & (0x9F000000)) == (0x90000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_adrp_value(void)
{
	return (0x90000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_prfm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_3(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x3FC00000) & (0x39800000)")));
		if (!(!(~(0x3FC00000) & (0x39800000))))
			__compiletime_assert_3();
	} while (0);
	return (code & (0x3FC00000)) == (0x39800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_prfm_value(void)
{
	return (0x39800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_prfm_lit(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_4(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0xFF000000) & (0xD8000000)")));
		if (!(!(~(0xFF000000) & (0xD8000000))))
			__compiletime_assert_4();
	} while (0);
	return (code & (0xFF000000)) == (0xD8000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_prfm_lit_value(void)
{
	return (0xD8000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_5(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x3FC00000) & (0x39000000)")));
		if (!(!(~(0x3FC00000) & (0x39000000))))
			__compiletime_assert_5();
	} while (0);
	return (code & (0x3FC00000)) == (0x39000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_store_imm_value(void)
{
	return (0x39000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_6(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x3FC00000) & (0x39400000)")));
		if (!(!(~(0x3FC00000) & (0x39400000))))
			__compiletime_assert_6();
	} while (0);
	return (code & (0x3FC00000)) == (0x39400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_load_imm_value(void)
{
	return (0x39400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_signed_load_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_7(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0X3FC00000) & (0x39800000)")));
		if (!(!(~(0X3FC00000) & (0x39800000))))
			__compiletime_assert_7();
	} while (0);
	return (code & (0X3FC00000)) == (0x39800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_signed_load_imm_value(void)
{
	return (0x39800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_pre(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_8(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x3FE00C00) & (0x38000C00)")));
		if (!(!(~(0x3FE00C00) & (0x38000C00))))
			__compiletime_assert_8();
	} while (0);
	return (code & (0x3FE00C00)) == (0x38000C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_store_pre_value(void)
{
	return (0x38000C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_pre(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void __compiletime_assert_9(
			void)
			__attribute__((
				__error__("BUILD_BUG_ON failed: "
					  "~(0x3FE00C00) & (0x38400C00)")));
		if (!(!(~(0x3FE00C00) & (0x38400C00))))
			__compiletime_assert_9();
	} while (0);
	return (code & (0x3FE00C00)) == (0x38400C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_load_pre_value(void)
{
	return (0x38400C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_post(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_10(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FE00C00) & (0x38000400)")));
		if (!(!(~(0x3FE00C00) & (0x38000400))))
			__compiletime_assert_10();
	} while (0);
	return (code & (0x3FE00C00)) == (0x38000400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_store_post_value(void)
{
	return (0x38000400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_post(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_11(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FE00C00) & (0x38400400)")));
		if (!(!(~(0x3FE00C00) & (0x38400400))))
			__compiletime_assert_11();
	} while (0);
	return (code & (0x3FE00C00)) == (0x38400400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_load_post_value(void)
{
	return (0x38400400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_str_reg(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_12(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FE0EC00) & (0x38206800)")));
		if (!(!(~(0x3FE0EC00) & (0x38206800))))
			__compiletime_assert_12();
	} while (0);
	return (code & (0x3FE0EC00)) == (0x38206800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_str_reg_value(void)
{
	return (0x38206800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_str_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_13(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FC00000) & (0x39000000)")));
		if (!(!(~(0x3FC00000) & (0x39000000))))
			__compiletime_assert_13();
	} while (0);
	return (code & (0x3FC00000)) == (0x39000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_str_imm_value(void)
{
	return (0x39000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldadd(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_14(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F20FC00) & (0x38200000)")));
		if (!(!(~(0x3F20FC00) & (0x38200000))))
			__compiletime_assert_14();
	} while (0);
	return (code & (0x3F20FC00)) == (0x38200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldadd_value(void)
{
	return (0x38200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldclr(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_15(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F20FC00) & (0x38201000)")));
		if (!(!(~(0x3F20FC00) & (0x38201000))))
			__compiletime_assert_15();
	} while (0);
	return (code & (0x3F20FC00)) == (0x38201000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldclr_value(void)
{
	return (0x38201000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldeor(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_16(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F20FC00) & (0x38202000)")));
		if (!(!(~(0x3F20FC00) & (0x38202000))))
			__compiletime_assert_16();
	} while (0);
	return (code & (0x3F20FC00)) == (0x38202000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldeor_value(void)
{
	return (0x38202000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldset(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_17(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F20FC00) & (0x38203000)")));
		if (!(!(~(0x3F20FC00) & (0x38203000))))
			__compiletime_assert_17();
	} while (0);
	return (code & (0x3F20FC00)) == (0x38203000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldset_value(void)
{
	return (0x38203000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_swp(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_18(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F20FC00) & (0x38208000)")));
		if (!(!(~(0x3F20FC00) & (0x38208000))))
			__compiletime_assert_18();
	} while (0);
	return (code & (0x3F20FC00)) == (0x38208000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_swp_value(void)
{
	return (0x38208000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_cas(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_19(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FA07C00) & (0x08A07C00)")));
		if (!(!(~(0x3FA07C00) & (0x08A07C00))))
			__compiletime_assert_19();
	} while (0);
	return (code & (0x3FA07C00)) == (0x08A07C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_cas_value(void)
{
	return (0x08A07C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldr_reg(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_20(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FE0EC00) & (0x38606800)")));
		if (!(!(~(0x3FE0EC00) & (0x38606800))))
			__compiletime_assert_20();
	} while (0);
	return (code & (0x3FE0EC00)) == (0x38606800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldr_reg_value(void)
{
	return (0x38606800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_signed_ldr_reg(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_21(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0X3FE0FC00) & (0x38A0E800)")));
		if (!(!(~(0X3FE0FC00) & (0x38A0E800))))
			__compiletime_assert_21();
	} while (0);
	return (code & (0X3FE0FC00)) == (0x38A0E800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_signed_ldr_reg_value(void)
{
	return (0x38A0E800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldr_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_22(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FC00000) & (0x39400000)")));
		if (!(!(~(0x3FC00000) & (0x39400000))))
			__compiletime_assert_22();
	} while (0);
	return (code & (0x3FC00000)) == (0x39400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldr_imm_value(void)
{
	return (0x39400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldr_lit(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_23(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xBF000000) & (0x18000000)")));
		if (!(!(~(0xBF000000) & (0x18000000))))
			__compiletime_assert_23();
	} while (0);
	return (code & (0xBF000000)) == (0x18000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldr_lit_value(void)
{
	return (0x18000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldrsw_lit(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_24(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFF000000) & (0x98000000)")));
		if (!(!(~(0xFF000000) & (0x98000000))))
			__compiletime_assert_24();
	} while (0);
	return (code & (0xFF000000)) == (0x98000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldrsw_lit_value(void)
{
	return (0x98000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_exclusive(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_25(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3F800000) & (0x08000000)")));
		if (!(!(~(0x3F800000) & (0x08000000))))
			__compiletime_assert_25();
	} while (0);
	return (code & (0x3F800000)) == (0x08000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_exclusive_value(void)
{
	return (0x08000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_acq(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_26(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FDFFC00) & (0x08DFFC00)")));
		if (!(!(~(0x3FDFFC00) & (0x08DFFC00))))
			__compiletime_assert_26();
	} while (0);
	return (code & (0x3FDFFC00)) == (0x08DFFC00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_load_acq_value(void)
{
	return (0x08DFFC00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_rel(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_27(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FDFFC00) & (0x089FFC00)")));
		if (!(!(~(0x3FDFFC00) & (0x089FFC00))))
			__compiletime_assert_27();
	} while (0);
	return (code & (0x3FDFFC00)) == (0x089FFC00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_store_rel_value(void)
{
	return (0x089FFC00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_ex(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_28(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FC00000) & (0x08400000)")));
		if (!(!(~(0x3FC00000) & (0x08400000))))
			__compiletime_assert_28();
	} while (0);
	return (code & (0x3FC00000)) == (0x08400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_load_ex_value(void)
{
	return (0x08400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_ex(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_29(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3FC00000) & (0x08000000)")));
		if (!(!(~(0x3FC00000) & (0x08000000))))
			__compiletime_assert_29();
	} while (0);
	return (code & (0x3FC00000)) == (0x08000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_store_ex_value(void)
{
	return (0x08000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_mops(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_30(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x3B200C00) & (0x19000400)")));
		if (!(!(~(0x3B200C00) & (0x19000400))))
			__compiletime_assert_30();
	} while (0);
	return (code & (0x3B200C00)) == (0x19000400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_mops_value(void)
{
	return (0x19000400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_stp(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_31(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x29000000)")));
		if (!(!(~(0x7FC00000) & (0x29000000))))
			__compiletime_assert_31();
	} while (0);
	return (code & (0x7FC00000)) == (0x29000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_stp_value(void)
{
	return (0x29000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldp(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_32(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x29400000)")));
		if (!(!(~(0x7FC00000) & (0x29400000))))
			__compiletime_assert_32();
	} while (0);
	return (code & (0x7FC00000)) == (0x29400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldp_value(void)
{
	return (0x29400000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_stp_post(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_33(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x28800000)")));
		if (!(!(~(0x7FC00000) & (0x28800000))))
			__compiletime_assert_33();
	} while (0);
	return (code & (0x7FC00000)) == (0x28800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_stp_post_value(void)
{
	return (0x28800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldp_post(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_34(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x28C00000)")));
		if (!(!(~(0x7FC00000) & (0x28C00000))))
			__compiletime_assert_34();
	} while (0);
	return (code & (0x7FC00000)) == (0x28C00000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldp_post_value(void)
{
	return (0x28C00000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_stp_pre(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_35(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x29800000)")));
		if (!(!(~(0x7FC00000) & (0x29800000))))
			__compiletime_assert_35();
	} while (0);
	return (code & (0x7FC00000)) == (0x29800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_stp_pre_value(void)
{
	return (0x29800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ldp_pre(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_36(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FC00000) & (0x29C00000)")));
		if (!(!(~(0x7FC00000) & (0x29C00000))))
			__compiletime_assert_36();
	} while (0);
	return (code & (0x7FC00000)) == (0x29C00000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ldp_pre_value(void)
{
	return (0x29C00000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_add_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_37(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x11000000)")));
		if (!(!(~(0x7F000000) & (0x11000000))))
			__compiletime_assert_37();
	} while (0);
	return (code & (0x7F000000)) == (0x11000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_add_imm_value(void)
{
	return (0x11000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_adds_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_38(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x31000000)")));
		if (!(!(~(0x7F000000) & (0x31000000))))
			__compiletime_assert_38();
	} while (0);
	return (code & (0x7F000000)) == (0x31000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_adds_imm_value(void)
{
	return (0x31000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_sub_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_39(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x51000000)")));
		if (!(!(~(0x7F000000) & (0x51000000))))
			__compiletime_assert_39();
	} while (0);
	return (code & (0x7F000000)) == (0x51000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_sub_imm_value(void)
{
	return (0x51000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_subs_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_40(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x71000000)")));
		if (!(!(~(0x7F000000) & (0x71000000))))
			__compiletime_assert_40();
	} while (0);
	return (code & (0x7F000000)) == (0x71000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_subs_imm_value(void)
{
	return (0x71000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_movn(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_41(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x12800000)")));
		if (!(!(~(0x7F800000) & (0x12800000))))
			__compiletime_assert_41();
	} while (0);
	return (code & (0x7F800000)) == (0x12800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_movn_value(void)
{
	return (0x12800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_sbfm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_42(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x13000000)")));
		if (!(!(~(0x7F800000) & (0x13000000))))
			__compiletime_assert_42();
	} while (0);
	return (code & (0x7F800000)) == (0x13000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_sbfm_value(void)
{
	return (0x13000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bfm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_43(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x33000000)")));
		if (!(!(~(0x7F800000) & (0x33000000))))
			__compiletime_assert_43();
	} while (0);
	return (code & (0x7F800000)) == (0x33000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bfm_value(void)
{
	return (0x33000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_movz(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_44(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x52800000)")));
		if (!(!(~(0x7F800000) & (0x52800000))))
			__compiletime_assert_44();
	} while (0);
	return (code & (0x7F800000)) == (0x52800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_movz_value(void)
{
	return (0x52800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ubfm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_45(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x53000000)")));
		if (!(!(~(0x7F800000) & (0x53000000))))
			__compiletime_assert_45();
	} while (0);
	return (code & (0x7F800000)) == (0x53000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ubfm_value(void)
{
	return (0x53000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_movk(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_46(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x72800000)")));
		if (!(!(~(0x7F800000) & (0x72800000))))
			__compiletime_assert_46();
	} while (0);
	return (code & (0x7F800000)) == (0x72800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_movk_value(void)
{
	return (0x72800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_add(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_47(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x0B000000)")));
		if (!(!(~(0x7F200000) & (0x0B000000))))
			__compiletime_assert_47();
	} while (0);
	return (code & (0x7F200000)) == (0x0B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_add_value(void)
{
	return (0x0B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_adds(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_48(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x2B000000)")));
		if (!(!(~(0x7F200000) & (0x2B000000))))
			__compiletime_assert_48();
	} while (0);
	return (code & (0x7F200000)) == (0x2B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_adds_value(void)
{
	return (0x2B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_sub(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_49(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x4B000000)")));
		if (!(!(~(0x7F200000) & (0x4B000000))))
			__compiletime_assert_49();
	} while (0);
	return (code & (0x7F200000)) == (0x4B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_sub_value(void)
{
	return (0x4B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_subs(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_50(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x6B000000)")));
		if (!(!(~(0x7F200000) & (0x6B000000))))
			__compiletime_assert_50();
	} while (0);
	return (code & (0x7F200000)) == (0x6B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_subs_value(void)
{
	return (0x6B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_madd(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_51(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE08000) & (0x1B000000)")));
		if (!(!(~(0x7FE08000) & (0x1B000000))))
			__compiletime_assert_51();
	} while (0);
	return (code & (0x7FE08000)) == (0x1B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_madd_value(void)
{
	return (0x1B000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_msub(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_52(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE08000) & (0x1B008000)")));
		if (!(!(~(0x7FE08000) & (0x1B008000))))
			__compiletime_assert_52();
	} while (0);
	return (code & (0x7FE08000)) == (0x1B008000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_msub_value(void)
{
	return (0x1B008000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_udiv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_53(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC00800)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC00800))))
			__compiletime_assert_53();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC00800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_udiv_value(void)
{
	return (0x1AC00800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_sdiv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_54(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC00C00)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC00C00))))
			__compiletime_assert_54();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC00C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_sdiv_value(void)
{
	return (0x1AC00C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_lslv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_55(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC02000)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC02000))))
			__compiletime_assert_55();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC02000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_lslv_value(void)
{
	return (0x1AC02000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_lsrv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_56(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC02400)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC02400))))
			__compiletime_assert_56();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC02400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_lsrv_value(void)
{
	return (0x1AC02400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_asrv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_57(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC02800)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC02800))))
			__compiletime_assert_57();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC02800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_asrv_value(void)
{
	return (0x1AC02800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_rorv(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_58(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FC00) & (0x1AC02C00)")));
		if (!(!(~(0x7FE0FC00) & (0x1AC02C00))))
			__compiletime_assert_58();
	} while (0);
	return (code & (0x7FE0FC00)) == (0x1AC02C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_rorv_value(void)
{
	return (0x1AC02C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_rev16(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_59(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FFFFC00) & (0x5AC00400)")));
		if (!(!(~(0x7FFFFC00) & (0x5AC00400))))
			__compiletime_assert_59();
	} while (0);
	return (code & (0x7FFFFC00)) == (0x5AC00400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_rev16_value(void)
{
	return (0x5AC00400);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_rev32(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_60(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FFFFC00) & (0x5AC00800)")));
		if (!(!(~(0x7FFFFC00) & (0x5AC00800))))
			__compiletime_assert_60();
	} while (0);
	return (code & (0x7FFFFC00)) == (0x5AC00800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_rev32_value(void)
{
	return (0x5AC00800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_rev64(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_61(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FFFFC00) & (0x5AC00C00)")));
		if (!(!(~(0x7FFFFC00) & (0x5AC00C00))))
			__compiletime_assert_61();
	} while (0);
	return (code & (0x7FFFFC00)) == (0x5AC00C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_rev64_value(void)
{
	return (0x5AC00C00);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_and(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_62(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x0A000000)")));
		if (!(!(~(0x7F200000) & (0x0A000000))))
			__compiletime_assert_62();
	} while (0);
	return (code & (0x7F200000)) == (0x0A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_and_value(void)
{
	return (0x0A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bic(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_63(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x0A200000)")));
		if (!(!(~(0x7F200000) & (0x0A200000))))
			__compiletime_assert_63();
	} while (0);
	return (code & (0x7F200000)) == (0x0A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bic_value(void)
{
	return (0x0A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_orr(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_64(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x2A000000)")));
		if (!(!(~(0x7F200000) & (0x2A000000))))
			__compiletime_assert_64();
	} while (0);
	return (code & (0x7F200000)) == (0x2A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_orr_value(void)
{
	return (0x2A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_mov_reg(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_65(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FE0FFE0) & (0x2A0003E0)")));
		if (!(!(~(0x7FE0FFE0) & (0x2A0003E0))))
			__compiletime_assert_65();
	} while (0);
	return (code & (0x7FE0FFE0)) == (0x2A0003E0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_mov_reg_value(void)
{
	return (0x2A0003E0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_orn(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_66(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x2A200000)")));
		if (!(!(~(0x7F200000) & (0x2A200000))))
			__compiletime_assert_66();
	} while (0);
	return (code & (0x7F200000)) == (0x2A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_orn_value(void)
{
	return (0x2A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_eor(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_67(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x4A000000)")));
		if (!(!(~(0x7F200000) & (0x4A000000))))
			__compiletime_assert_67();
	} while (0);
	return (code & (0x7F200000)) == (0x4A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_eor_value(void)
{
	return (0x4A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_eon(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_68(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x4A200000)")));
		if (!(!(~(0x7F200000) & (0x4A200000))))
			__compiletime_assert_68();
	} while (0);
	return (code & (0x7F200000)) == (0x4A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_eon_value(void)
{
	return (0x4A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ands(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_69(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x6A000000)")));
		if (!(!(~(0x7F200000) & (0x6A000000))))
			__compiletime_assert_69();
	} while (0);
	return (code & (0x7F200000)) == (0x6A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ands_value(void)
{
	return (0x6A000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bics(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_70(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F200000) & (0x6A200000)")));
		if (!(!(~(0x7F200000) & (0x6A200000))))
			__compiletime_assert_70();
	} while (0);
	return (code & (0x7F200000)) == (0x6A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bics_value(void)
{
	return (0x6A200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_and_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_71(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x12000000)")));
		if (!(!(~(0x7F800000) & (0x12000000))))
			__compiletime_assert_71();
	} while (0);
	return (code & (0x7F800000)) == (0x12000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_and_imm_value(void)
{
	return (0x12000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_orr_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_72(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x32000000)")));
		if (!(!(~(0x7F800000) & (0x32000000))))
			__compiletime_assert_72();
	} while (0);
	return (code & (0x7F800000)) == (0x32000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_orr_imm_value(void)
{
	return (0x32000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_eor_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_73(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x52000000)")));
		if (!(!(~(0x7F800000) & (0x52000000))))
			__compiletime_assert_73();
	} while (0);
	return (code & (0x7F800000)) == (0x52000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_eor_imm_value(void)
{
	return (0x52000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ands_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_74(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F800000) & (0x72000000)")));
		if (!(!(~(0x7F800000) & (0x72000000))))
			__compiletime_assert_74();
	} while (0);
	return (code & (0x7F800000)) == (0x72000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ands_imm_value(void)
{
	return (0x72000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_extr(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_75(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7FA00000) & (0x13800000)")));
		if (!(!(~(0x7FA00000) & (0x13800000))))
			__compiletime_assert_75();
	} while (0);
	return (code & (0x7FA00000)) == (0x13800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_extr_value(void)
{
	return (0x13800000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_b(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_76(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFC000000) & (0x14000000)")));
		if (!(!(~(0xFC000000) & (0x14000000))))
			__compiletime_assert_76();
	} while (0);
	return (code & (0xFC000000)) == (0x14000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_b_value(void)
{
	return (0x14000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bl(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_77(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFC000000) & (0x94000000)")));
		if (!(!(~(0xFC000000) & (0x94000000))))
			__compiletime_assert_77();
	} while (0);
	return (code & (0xFC000000)) == (0x94000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bl_value(void)
{
	return (0x94000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_cbz(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_78(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x34000000)")));
		if (!(!(~(0x7F000000) & (0x34000000))))
			__compiletime_assert_78();
	} while (0);
	return (code & (0x7F000000)) == (0x34000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_cbz_value(void)
{
	return (0x34000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_cbnz(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_79(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x35000000)")));
		if (!(!(~(0x7F000000) & (0x35000000))))
			__compiletime_assert_79();
	} while (0);
	return (code & (0x7F000000)) == (0x35000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_cbnz_value(void)
{
	return (0x35000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_tbz(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_80(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x36000000)")));
		if (!(!(~(0x7F000000) & (0x36000000))))
			__compiletime_assert_80();
	} while (0);
	return (code & (0x7F000000)) == (0x36000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_tbz_value(void)
{
	return (0x36000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_tbnz(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_81(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0x7F000000) & (0x37000000)")));
		if (!(!(~(0x7F000000) & (0x37000000))))
			__compiletime_assert_81();
	} while (0);
	return (code & (0x7F000000)) == (0x37000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_tbnz_value(void)
{
	return (0x37000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bcond(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_82(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFF000010) & (0x54000000)")));
		if (!(!(~(0xFF000010) & (0x54000000))))
			__compiletime_assert_82();
	} while (0);
	return (code & (0xFF000010)) == (0x54000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bcond_value(void)
{
	return (0x54000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_svc(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_83(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFE0001F) & (0xD4000001)")));
		if (!(!(~(0xFFE0001F) & (0xD4000001))))
			__compiletime_assert_83();
	} while (0);
	return (code & (0xFFE0001F)) == (0xD4000001);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_svc_value(void)
{
	return (0xD4000001);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_hvc(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_84(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFE0001F) & (0xD4000002)")));
		if (!(!(~(0xFFE0001F) & (0xD4000002))))
			__compiletime_assert_84();
	} while (0);
	return (code & (0xFFE0001F)) == (0xD4000002);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_hvc_value(void)
{
	return (0xD4000002);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_smc(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_85(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFE0001F) & (0xD4000003)")));
		if (!(!(~(0xFFE0001F) & (0xD4000003))))
			__compiletime_assert_85();
	} while (0);
	return (code & (0xFFE0001F)) == (0xD4000003);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_smc_value(void)
{
	return (0xD4000003);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_brk(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_86(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFE0001F) & (0xD4200000)")));
		if (!(!(~(0xFFE0001F) & (0xD4200000))))
			__compiletime_assert_86();
	} while (0);
	return (code & (0xFFE0001F)) == (0xD4200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_brk_value(void)
{
	return (0xD4200000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_exception(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_87(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFF000000) & (0xD4000000)")));
		if (!(!(~(0xFF000000) & (0xD4000000))))
			__compiletime_assert_87();
	} while (0);
	return (code & (0xFF000000)) == (0xD4000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_exception_value(void)
{
	return (0xD4000000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_hint(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_88(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF01F) & (0xD503201F)")));
		if (!(!(~(0xFFFFF01F) & (0xD503201F))))
			__compiletime_assert_88();
	} while (0);
	return (code & (0xFFFFF01F)) == (0xD503201F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_hint_value(void)
{
	return (0xD503201F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_br(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_89(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFC1F) & (0xD61F0000)")));
		if (!(!(~(0xFFFFFC1F) & (0xD61F0000))))
			__compiletime_assert_89();
	} while (0);
	return (code & (0xFFFFFC1F)) == (0xD61F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_br_value(void)
{
	return (0xD61F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_br_auth(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_90(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFEFFF800) & (0xD61F0800)")));
		if (!(!(~(0xFEFFF800) & (0xD61F0800))))
			__compiletime_assert_90();
	} while (0);
	return (code & (0xFEFFF800)) == (0xD61F0800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_br_auth_value(void)
{
	return (0xD61F0800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_blr(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_91(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFC1F) & (0xD63F0000)")));
		if (!(!(~(0xFFFFFC1F) & (0xD63F0000))))
			__compiletime_assert_91();
	} while (0);
	return (code & (0xFFFFFC1F)) == (0xD63F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_blr_value(void)
{
	return (0xD63F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_blr_auth(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_92(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFEFFF800) & (0xD63F0800)")));
		if (!(!(~(0xFEFFF800) & (0xD63F0800))))
			__compiletime_assert_92();
	} while (0);
	return (code & (0xFEFFF800)) == (0xD63F0800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_blr_auth_value(void)
{
	return (0xD63F0800);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ret(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_93(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFC1F) & (0xD65F0000)")));
		if (!(!(~(0xFFFFFC1F) & (0xD65F0000))))
			__compiletime_assert_93();
	} while (0);
	return (code & (0xFFFFFC1F)) == (0xD65F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ret_value(void)
{
	return (0xD65F0000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ret_auth(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_94(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFBFF) & (0xD65F0BFF)")));
		if (!(!(~(0xFFFFFBFF) & (0xD65F0BFF))))
			__compiletime_assert_94();
	} while (0);
	return (code & (0xFFFFFBFF)) == (0xD65F0BFF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ret_auth_value(void)
{
	return (0xD65F0BFF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_eret(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_95(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFFFF) & (0xD69F03E0)")));
		if (!(!(~(0xFFFFFFFF) & (0xD69F03E0))))
			__compiletime_assert_95();
	} while (0);
	return (code & (0xFFFFFFFF)) == (0xD69F03E0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_eret_value(void)
{
	return (0xD69F03E0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_eret_auth(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_96(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFBFF) & (0xD69F0BFF)")));
		if (!(!(~(0xFFFFFBFF) & (0xD69F0BFF))))
			__compiletime_assert_96();
	} while (0);
	return (code & (0xFFFFFBFF)) == (0xD69F0BFF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_eret_auth_value(void)
{
	return (0xD69F0BFF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_mrs(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_97(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFF00000) & (0xD5300000)")));
		if (!(!(~(0xFFF00000) & (0xD5300000))))
			__compiletime_assert_97();
	} while (0);
	return (code & (0xFFF00000)) == (0xD5300000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_mrs_value(void)
{
	return (0xD5300000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_msr_imm(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_98(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFF8F01F) & (0xD500401F)")));
		if (!(!(~(0xFFF8F01F) & (0xD500401F))))
			__compiletime_assert_98();
	} while (0);
	return (code & (0xFFF8F01F)) == (0xD500401F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_msr_imm_value(void)
{
	return (0xD500401F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_msr_reg(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_99(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFF00000) & (0xD5100000)")));
		if (!(!(~(0xFFF00000) & (0xD5100000))))
			__compiletime_assert_99();
	} while (0);
	return (code & (0xFFF00000)) == (0xD5100000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_msr_reg_value(void)
{
	return (0xD5100000);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_dmb(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_100(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF0FF) & (0xD50330BF)")));
		if (!(!(~(0xFFFFF0FF) & (0xD50330BF))))
			__compiletime_assert_100();
	} while (0);
	return (code & (0xFFFFF0FF)) == (0xD50330BF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_dmb_value(void)
{
	return (0xD50330BF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_dsb_base(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_101(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF0FF) & (0xD503309F)")));
		if (!(!(~(0xFFFFF0FF) & (0xD503309F))))
			__compiletime_assert_101();
	} while (0);
	return (code & (0xFFFFF0FF)) == (0xD503309F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_dsb_base_value(void)
{
	return (0xD503309F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_dsb_nxs(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_102(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF3FF) & (0xD503323F)")));
		if (!(!(~(0xFFFFF3FF) & (0xD503323F))))
			__compiletime_assert_102();
	} while (0);
	return (code & (0xFFFFF3FF)) == (0xD503323F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_dsb_nxs_value(void)
{
	return (0xD503323F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_isb(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_103(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF0FF) & (0xD50330DF)")));
		if (!(!(~(0xFFFFF0FF) & (0xD50330DF))))
			__compiletime_assert_103();
	} while (0);
	return (code & (0xFFFFF0FF)) == (0xD50330DF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_isb_value(void)
{
	return (0xD50330DF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_sb(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_104(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFFFF) & (0xD50330FF)")));
		if (!(!(~(0xFFFFFFFF) & (0xD50330FF))))
			__compiletime_assert_104();
	} while (0);
	return (code & (0xFFFFFFFF)) == (0xD50330FF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_sb_value(void)
{
	return (0xD50330FF);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_clrex(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_105(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFF0FF) & (0xD503305F)")));
		if (!(!(~(0xFFFFF0FF) & (0xD503305F))))
			__compiletime_assert_105();
	} while (0);
	return (code & (0xFFFFF0FF)) == (0xD503305F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_clrex_value(void)
{
	return (0xD503305F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_ssbb(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_106(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFFFF) & (0xD503309F)")));
		if (!(!(~(0xFFFFFFFF) & (0xD503309F))))
			__compiletime_assert_106();
	} while (0);
	return (code & (0xFFFFFFFF)) == (0xD503309F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_ssbb_value(void)
{
	return (0xD503309F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_pssbb(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_107(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFFFF) & (0xD503349F)")));
		if (!(!(~(0xFFFFFFFF) & (0xD503349F))))
			__compiletime_assert_107();
	} while (0);
	return (code & (0xFFFFFFFF)) == (0xD503349F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_pssbb_value(void)
{
	return (0xD503349F);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_bti(u32 code)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_108(void) __attribute__((
			__error__("BUILD_BUG_ON failed: "
				  "~(0xFFFFFF3F) & (0xD503241f)")));
		if (!(!(~(0xFFFFFF3F) & (0xD503241f))))
			__compiletime_assert_108();
	} while (0);
	return (code & (0xFFFFFF3F)) == (0xD503241f);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_get_bti_value(void)
{
	return (0xD503241f);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_steppable_hint(u32 insn)
{
	if (!aarch64_insn_is_hint(insn))
		return false;

	switch (insn & 0xFE0) {
	case AARCH64_INSN_HINT_XPACLRI:
	case AARCH64_INSN_HINT_PACIA_1716:
	case AARCH64_INSN_HINT_PACIB_1716:
	case AARCH64_INSN_HINT_PACIAZ:
	case AARCH64_INSN_HINT_PACIASP:
	case AARCH64_INSN_HINT_PACIBZ:
	case AARCH64_INSN_HINT_PACIBSP:
	case AARCH64_INSN_HINT_BTI:
	case AARCH64_INSN_HINT_BTIC:
	case AARCH64_INSN_HINT_BTIJ:
	case AARCH64_INSN_HINT_BTIJC:
	case AARCH64_INSN_HINT_NOP:
		return true;
	default:
		return false;
	}
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_branch(u32 insn)
{
	return aarch64_insn_is_b(insn) || aarch64_insn_is_bl(insn) ||
	       aarch64_insn_is_cbz(insn) || aarch64_insn_is_cbnz(insn) ||
	       aarch64_insn_is_tbz(insn) || aarch64_insn_is_tbnz(insn) ||
	       aarch64_insn_is_ret(insn) || aarch64_insn_is_ret_auth(insn) ||
	       aarch64_insn_is_br(insn) || aarch64_insn_is_br_auth(insn) ||
	       aarch64_insn_is_blr(insn) || aarch64_insn_is_blr_auth(insn) ||
	       aarch64_insn_is_bcond(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_branch_imm(u32 insn)
{
	return aarch64_insn_is_b(insn) || aarch64_insn_is_bl(insn) ||
	       aarch64_insn_is_tbz(insn) || aarch64_insn_is_tbnz(insn) ||
	       aarch64_insn_is_cbz(insn) || aarch64_insn_is_cbnz(insn) ||
	       aarch64_insn_is_bcond(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_adr_adrp(u32 insn)
{
	return aarch64_insn_is_adr(insn) || aarch64_insn_is_adrp(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_dsb(u32 insn)
{
	return aarch64_insn_is_dsb_base(insn) || aarch64_insn_is_dsb_nxs(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_barrier(u32 insn)
{
	return aarch64_insn_is_dmb(insn) || aarch64_insn_is_dsb(insn) ||
	       aarch64_insn_is_isb(insn) || aarch64_insn_is_sb(insn) ||
	       aarch64_insn_is_clrex(insn) || aarch64_insn_is_ssbb(insn) ||
	       aarch64_insn_is_pssbb(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_single(u32 insn)
{
	return aarch64_insn_is_store_imm(insn) ||
	       aarch64_insn_is_store_pre(insn) ||
	       aarch64_insn_is_store_post(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_store_pair(u32 insn)
{
	return aarch64_insn_is_stp(insn) || aarch64_insn_is_stp_pre(insn) ||
	       aarch64_insn_is_stp_post(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_single(u32 insn)
{
	return aarch64_insn_is_load_imm(insn) ||
	       aarch64_insn_is_load_pre(insn) ||
	       aarch64_insn_is_load_post(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_load_pair(u32 insn)
{
	return aarch64_insn_is_ldp(insn) || aarch64_insn_is_ldp_pre(insn) ||
	       aarch64_insn_is_ldp_post(insn);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_uses_literal(u32 insn)
{
	return aarch64_insn_is_ldr_lit(insn) ||
	       aarch64_insn_is_ldrsw_lit(insn) ||
	       aarch64_insn_is_adr_adrp(insn) || aarch64_insn_is_prfm_lit(insn);
}

enum aarch64_insn_encoding_class aarch64_get_insn_class(u32 insn);
u64 aarch64_insn_decode_immediate(enum aarch64_insn_imm_type type, u32 insn);
u32 aarch64_insn_encode_immediate(enum aarch64_insn_imm_type type, u32 insn,
				  u64 imm);
u32 aarch64_insn_decode_register(enum aarch64_insn_register_type type,
				 u32 insn);
u32 aarch64_insn_gen_branch_imm(unsigned long pc, unsigned long addr,
				enum aarch64_insn_branch_type type);
u32 aarch64_insn_gen_comp_branch_imm(unsigned long pc, unsigned long addr,
				     enum aarch64_insn_register reg,
				     enum aarch64_insn_variant variant,
				     enum aarch64_insn_branch_type type);
u32 aarch64_insn_gen_cond_branch_imm(unsigned long pc, unsigned long addr,
				     enum aarch64_insn_condition cond);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_gen_hint(enum aarch64_insn_hint_cr_op op)
{
	return aarch64_insn_get_hint_value() | op;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
aarch64_insn_gen_nop(void)
{
	return aarch64_insn_gen_hint(AARCH64_INSN_HINT_NOP);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
aarch64_insn_is_nop(u32 insn)
{
	return insn == aarch64_insn_gen_nop();
}

u32 aarch64_insn_gen_branch_reg(enum aarch64_insn_register reg,
				enum aarch64_insn_branch_type type);
u32 aarch64_insn_gen_load_store_reg(enum aarch64_insn_register reg,
				    enum aarch64_insn_register base,
				    enum aarch64_insn_register offset,
				    enum aarch64_insn_size_type size,
				    enum aarch64_insn_ldst_type type);
u32 aarch64_insn_gen_load_store_imm(enum aarch64_insn_register reg,
				    enum aarch64_insn_register base,
				    unsigned int imm,
				    enum aarch64_insn_size_type size,
				    enum aarch64_insn_ldst_type type);
u32 aarch64_insn_gen_load_literal(unsigned long pc, unsigned long addr,
				  enum aarch64_insn_register reg, bool is64bit);
u32 aarch64_insn_gen_load_store_pair(enum aarch64_insn_register reg1,
				     enum aarch64_insn_register reg2,
				     enum aarch64_insn_register base,
				     int offset,
				     enum aarch64_insn_variant variant,
				     enum aarch64_insn_ldst_type type);
u32 aarch64_insn_gen_load_acq_store_rel(enum aarch64_insn_register reg,
					enum aarch64_insn_register base,
					enum aarch64_insn_size_type size,
					enum aarch64_insn_ldst_type type);
u32 aarch64_insn_gen_load_store_ex(enum aarch64_insn_register reg,
				   enum aarch64_insn_register base,
				   enum aarch64_insn_register state,
				   enum aarch64_insn_size_type size,
				   enum aarch64_insn_ldst_type type);
u32 aarch64_insn_gen_add_sub_imm(enum aarch64_insn_register dst,
				 enum aarch64_insn_register src, int imm,
				 enum aarch64_insn_variant variant,
				 enum aarch64_insn_adsb_type type);
u32 aarch64_insn_gen_adr(unsigned long pc, unsigned long addr,
			 enum aarch64_insn_register reg,
			 enum aarch64_insn_adr_type type);
u32 aarch64_insn_gen_bitfield(enum aarch64_insn_register dst,
			      enum aarch64_insn_register src, int immr,
			      int imms, enum aarch64_insn_variant variant,
			      enum aarch64_insn_bitfield_type type);
u32 aarch64_insn_gen_movewide(enum aarch64_insn_register dst, int imm,
			      int shift, enum aarch64_insn_variant variant,
			      enum aarch64_insn_movewide_type type);
u32 aarch64_insn_gen_add_sub_shifted_reg(enum aarch64_insn_register dst,
					 enum aarch64_insn_register src,
					 enum aarch64_insn_register reg,
					 int shift,
					 enum aarch64_insn_variant variant,
					 enum aarch64_insn_adsb_type type);
u32 aarch64_insn_gen_data1(enum aarch64_insn_register dst,
			   enum aarch64_insn_register src,
			   enum aarch64_insn_variant variant,
			   enum aarch64_insn_data1_type type);
u32 aarch64_insn_gen_data2(enum aarch64_insn_register dst,
			   enum aarch64_insn_register src,
			   enum aarch64_insn_register reg,
			   enum aarch64_insn_variant variant,
			   enum aarch64_insn_data2_type type);
u32 aarch64_insn_gen_data3(enum aarch64_insn_register dst,
			   enum aarch64_insn_register src,
			   enum aarch64_insn_register reg1,
			   enum aarch64_insn_register reg2,
			   enum aarch64_insn_variant variant,
			   enum aarch64_insn_data3_type type);
u32 aarch64_insn_gen_logical_shifted_reg(enum aarch64_insn_register dst,
					 enum aarch64_insn_register src,
					 enum aarch64_insn_register reg,
					 int shift,
					 enum aarch64_insn_variant variant,
					 enum aarch64_insn_logic_type type);
u32 aarch64_insn_gen_move_reg(enum aarch64_insn_register dst,
			      enum aarch64_insn_register src,
			      enum aarch64_insn_variant variant);
u32 aarch64_insn_gen_logical_immediate(enum aarch64_insn_logic_type type,
				       enum aarch64_insn_variant variant,
				       enum aarch64_insn_register Rn,
				       enum aarch64_insn_register Rd, u64 imm);
u32 aarch64_insn_gen_extr(enum aarch64_insn_variant variant,
			  enum aarch64_insn_register Rm,
			  enum aarch64_insn_register Rn,
			  enum aarch64_insn_register Rd, u8 lsb);
u32 aarch64_insn_gen_atomic_ld_op(enum aarch64_insn_register result,
				  enum aarch64_insn_register address,
				  enum aarch64_insn_register value,
				  enum aarch64_insn_size_type size,
				  enum aarch64_insn_mem_atomic_op op,
				  enum aarch64_insn_mem_order_type order);
u32 aarch64_insn_gen_cas(enum aarch64_insn_register result,
			 enum aarch64_insn_register address,
			 enum aarch64_insn_register value,
			 enum aarch64_insn_size_type size,
			 enum aarch64_insn_mem_order_type order);
u32 aarch64_insn_gen_dmb(enum aarch64_insn_mb_type type);
u32 aarch64_insn_gen_dsb(enum aarch64_insn_mb_type type);
u32 aarch64_insn_gen_mrs(enum aarch64_insn_register result,
			 enum aarch64_insn_system_register sysreg);

s32 aarch64_get_branch_offset(u32 insn);
u32 aarch64_set_branch_offset(u32 insn, s32 offset);

s32 aarch64_insn_adrp_get_offset(u32 insn);
u32 aarch64_insn_adrp_set_offset(u32 insn, s32 offset);

bool aarch32_insn_is_wide(u32 insn);

u32 aarch64_insn_extract_system_reg(u32 insn);
u32 aarch32_insn_extract_reg_num(u32 insn, int offset);
u32 aarch32_insn_mcr_extract_opc2(u32 insn);
u32 aarch32_insn_mcr_extract_crm(u32 insn);

typedef bool(pstate_check_t)(unsigned long);
extern pstate_check_t *const aarch32_opcode_cond_checks[16];
# 15 "./arch/arm64/include/asm/jump_label.h" 2
# 31 "./arch/arm64/include/asm/jump_label.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
arch_static_branch(struct static_key *const key, const bool branch)
{
	char *k = &((char *)key)[branch];

	asm goto("1:	nop\n\t"
		 ".pushsection	__jump_table, \"aw\"\n\t"
		 ".align		3\n\t"
		 ".long		1b - ., "
		 "%l[l_yes]"
		 " - .\n\t"
		 ".quad		"
		 "%c0"
		 " - .\n\t"
		 ".popsection\n\t"
		 :
		 : "i"(k)
		 :
		 : l_yes);

	return false;
l_yes:
	return true;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
arch_static_branch_jump(struct static_key *const key, const bool branch)
{
	char *k = &((char *)key)[branch];

	asm goto("1:	b		%l[l_yes]		\n\t"
		 ".pushsection	__jump_table, \"aw\"\n\t"
		 ".align		3\n\t"
		 ".long		1b - ., "
		 "%l[l_yes]"
		 " - .\n\t"
		 ".quad		"
		 "%c0"
		 " - .\n\t"
		 ".popsection\n\t"
		 :
		 : "i"(k)
		 :
		 : l_yes);
	return false;
l_yes:
	return true;
}
# 107 "./include/linux/jump_label.h" 2

struct jump_entry {
	s32 code;
	s32 target;
	long key;
};

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
jump_entry_code(const struct jump_entry *entry)
{
	return (unsigned long)&entry->code + entry->code;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
jump_entry_target(const struct jump_entry *entry)
{
	return (unsigned long)&entry->target + entry->target;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) struct static_key *
jump_entry_key(const struct jump_entry *entry)
{
	long offset = entry->key & ~3L;

	return (struct static_key *)((unsigned long)&entry->key + offset);
}
# 153 "./include/linux/jump_label.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
jump_entry_is_branch(const struct jump_entry *entry)
{
	return (unsigned long)entry->key & 1UL;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
jump_entry_is_init(const struct jump_entry *entry)
{
	return (unsigned long)entry->key & 2UL;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
jump_entry_set_init(struct jump_entry *entry, bool set)
{
	if (set)
		entry->key |= 2;
	else
		entry->key &= ~2;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
jump_entry_size(struct jump_entry *entry)
{
	return 4;
}

enum jump_label_type {
	JUMP_LABEL_NOP = 0,
	JUMP_LABEL_JMP,
};

struct module;
# 199 "./include/linux/jump_label.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool static_key_false(struct static_key *key)
{
	return arch_static_branch(key, false);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
static_key_true(struct static_key *key)
{
	return !arch_static_branch(key, true);
}

extern struct jump_entry __start___jump_table[];
extern struct jump_entry __stop___jump_table[];

extern void jump_label_init(void);
extern void jump_label_init_ro(void);
extern void jump_label_lock(void);
extern void jump_label_unlock(void);
extern void arch_jump_label_transform(struct jump_entry *entry,
				      enum jump_label_type type);
extern bool arch_jump_label_transform_queue(struct jump_entry *entry,
					    enum jump_label_type type);
extern void arch_jump_label_transform_apply(void);
extern int jump_label_text_reserved(void *start, void *end);
extern bool static_key_slow_inc(struct static_key *key);
extern bool static_key_fast_inc_not_disabled(struct static_key *key);
extern void static_key_slow_dec(struct static_key *key);
extern bool static_key_slow_inc_cpuslocked(struct static_key *key);
extern void static_key_slow_dec_cpuslocked(struct static_key *key);
extern int static_key_count(struct static_key *key);
extern void static_key_enable(struct static_key *key);
extern void static_key_disable(struct static_key *key);
extern void static_key_enable_cpuslocked(struct static_key *key);
extern void static_key_disable_cpuslocked(struct static_key *key);
extern enum jump_label_type jump_label_init_type(struct jump_entry *entry);
# 337 "./include/linux/jump_label.h"
static __attribute__((__unused__))
const bool class_jump_label_lock_is_conditional = false;
typedef void lock_jump_label_lock_t;
typedef struct {
	void *lock;
	;
} class_jump_label_lock_t;
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
class_jump_label_lock_destructor(class_jump_label_lock_t *_T)
{
	if (_T->lock) {
		jump_label_unlock();
	}
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void *
class_jump_label_lock_lock_ptr(class_jump_label_lock_t *_T)
{
	void *_ptr = (void *)(unsigned long)*(&_T->lock);
	if (IS_ERR(_ptr)) {
		_ptr = ((void *)0);
	}
	return _ptr;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
class_jump_label_lock_lock_err(class_jump_label_lock_t *_T)
{
	long _rc = (unsigned long)*(&_T->lock);
	if (!_rc) {
		_rc = -16;
	}
	if (!__builtin_expect(!!((unsigned long)(void *)(_rc) >=
				 (unsigned long)-4095),
			      0)) {
		_rc = 0;
	}
	return _rc;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) class_jump_label_lock_t
class_jump_label_lock_constructor(void)
{
	class_jump_label_lock_t _t = { .lock = (void *)1 },
				*_T __attribute__((__unused__)) = &_t;
	jump_label_lock();
	return _t;
}
# 351 "./include/linux/jump_label.h"
struct static_key_true {
	struct static_key key;
};

struct static_key_false {
	struct static_key key;
};
# 405 "./include/linux/jump_label.h"
extern bool ____wrong_branch_error(void);
# 7 "./include/linux/dynamic_debug.h" 2
# 16 "./include/linux/dynamic_debug.h"
struct _ddebug {
	const char *modname;
	const char *function;
	const char *filename;
	const char *format;
	unsigned int lineno : 18;

	unsigned int class_id : 6;
# 53 "./include/linux/dynamic_debug.h"
	unsigned int flags : 8;

	union {
		struct static_key_true dd_key_true;
		struct static_key_false dd_key_false;
	} key;

} __attribute__((aligned(8)));

enum class_map_type {
	DD_CLASS_TYPE_DISJOINT_BITS,

	DD_CLASS_TYPE_LEVEL_NUM,

	DD_CLASS_TYPE_DISJOINT_NAMES,

	DD_CLASS_TYPE_LEVEL_NAMES,

};

struct ddebug_class_map {
	struct list_head link;
	struct module *mod;
	const char *mod_name;
	const char **class_names;
	const int length;
	const int base;
	enum class_map_type map_type;
};
# 118 "./include/linux/dynamic_debug.h"
struct _ddebug_info {
	struct _ddebug *descs;
	struct ddebug_class_map *classes;
	unsigned int num_descs;
	unsigned int num_classes;
};

struct ddebug_class_param {
	union {
		unsigned long *bits;
		unsigned int *lvl;
	};
	char flags[8];
	const struct ddebug_class_map *map;
};
# 141 "./include/linux/dynamic_debug.h"
extern __attribute__((__format__(printf, 2, 3))) void
__dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...);

struct device;

extern __attribute__((__format__(printf, 3, 4))) void
__dynamic_dev_dbg(struct _ddebug *descriptor, const struct device *dev,
		  const char *fmt, ...);

struct net_device;

extern __attribute__((__format__(printf, 3, 4))) void
__dynamic_netdev_dbg(struct _ddebug *descriptor, const struct net_device *dev,
		     const char *fmt, ...);

struct ib_device;

extern __attribute__((__format__(printf, 3, 4))) void
__dynamic_ibdev_dbg(struct _ddebug *descriptor, const struct ib_device *ibdev,
		    const char *fmt, ...);
# 334 "./include/linux/dynamic_debug.h"
extern int ddebug_dyndbg_module_param_cb(char *param, char *val,
					 const char *modname);
struct kernel_param;
int param_set_dyndbg_classes(const char *instr, const struct kernel_param *kp);
int param_get_dyndbg_classes(char *buffer, const struct kernel_param *kp);
# 363 "./include/linux/dynamic_debug.h"
extern const struct kernel_param_ops param_ops_dyndbg_classes;
# 621 "./include/linux/printk.h" 2
# 758 "./include/linux/printk.h"
extern const struct file_operations kmsg_fops;

enum { DUMP_PREFIX_NONE, DUMP_PREFIX_ADDRESS, DUMP_PREFIX_OFFSET };
extern int hex_dump_to_buffer(const void *buf, size_t len, int rowsize,
			      int groupsize, char *linebuf, size_t linebuflen,
			      bool ascii);

extern void print_hex_dump(const char *level, const char *prefix_str,
			   int prefix_type, int rowsize, int groupsize,
			   const void *buf, size_t len, bool ascii);
# 810 "./include/linux/printk.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
print_hex_dump_devel(const char *prefix_str, int prefix_type, int rowsize,
		     int groupsize, const void *buf, size_t len, bool ascii)
{
}
# 32 "./include/asm-generic/bug.h" 2

struct warn_args;
struct pt_regs;

void __warn(const char *file, int line, void *caller, unsigned taint,
	    struct pt_regs *regs, struct warn_args *args);
# 48 "./include/asm-generic/bug.h"
struct bug_entry {
	signed int bug_addr_disp;

	signed int file_disp;
	unsigned short line;

	unsigned short flags;
};
# 100 "./include/asm-generic/bug.h"
extern __attribute__((__format__(printf, 4, 5))) void
warn_slowpath_fmt(const char *file, const int line, unsigned taint,
		  const char *fmt, ...);
extern __attribute__((__format__(printf, 1, 2))) void
__warn_printk(const char *fmt, ...);
# 27 "./arch/arm64/include/asm/bug.h" 2
# 6 "./include/linux/bug.h" 2

enum bug_trap_type {
	BUG_TRAP_TYPE_NONE = 0,
	BUG_TRAP_TYPE_WARN = 1,
	BUG_TRAP_TYPE_BUG = 2,
};

struct pt_regs;
# 34 "./include/linux/bug.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
is_warning_bug(const struct bug_entry *bug)
{
	return bug->flags & (1 << 0);
}

void bug_get_file_line(struct bug_entry *bug, const char **file,
		       unsigned int *line);

struct bug_entry *find_bug(unsigned long bugaddr);

enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);
enum bug_trap_type report_bug_entry(struct bug_entry *bug,
				    struct pt_regs *regs);

int is_valid_bugaddr(unsigned long addr);

void generic_bug_clear_once(void);
# 85 "./include/linux/bug.h"
void mem_dump_obj(void *object);
# 94 "./include/linux/bug.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__warn_unused_result__)) bool check_data_corruption(bool v)
{
	return v;
}
# 14 "./include/linux/thread_info.h" 2
# 1 "./include/linux/restart_block.h" 1

# 1 "./include/linux/time64.h" 1

# 1 "./include/linux/math64.h" 1

# 1 "./include/linux/math.h" 1

# 1 "./arch/arm64/include/generated/asm/div64.h" 1
# 1 "./include/asm-generic/div64.h" 1
# 2 "./arch/arm64/include/generated/asm/div64.h" 2
# 7 "./include/linux/math.h" 2
# 1 "./include/uapi/linux/kernel.h" 1

# 1 "./include/uapi/linux/sysinfo.h" 1

struct sysinfo {
	__kernel_long_t uptime;
	__kernel_ulong_t loads[3];
	__kernel_ulong_t totalram;
	__kernel_ulong_t freeram;
	__kernel_ulong_t sharedram;
	__kernel_ulong_t bufferram;
	__kernel_ulong_t totalswap;
	__kernel_ulong_t freeswap;
	__u16 procs;
	__u16 pad;
	__kernel_ulong_t totalhigh;
	__kernel_ulong_t freehigh;
	__u32 mem_unit;
	char _f[20 - 2 * sizeof(__kernel_ulong_t) - sizeof(__u32)];
};
# 6 "./include/uapi/linux/kernel.h" 2
# 8 "./include/linux/math.h" 2
# 111 "./include/linux/math.h"
struct s8_fract {
	__s8 numerator;
	__s8 denominator;
};
struct u8_fract {
	__u8 numerator;
	__u8 denominator;
};
struct s16_fract {
	__s16 numerator;
	__s16 denominator;
};
struct u16_fract {
	__u16 numerator;
	__u16 denominator;
};
struct s32_fract {
	__s32 numerator;
	__s32 denominator;
};
struct u32_fract {
	__u32 numerator;
	__u32 denominator;
};
# 194 "./include/linux/math.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32 reciprocal_scale(u32 val,
								     u32 ep_ro)
{
	return (u32)(((u64)val * ep_ro) >> 32);
}

u64 int_pow(u64 base, unsigned int exp);
unsigned long int_sqrt(unsigned long);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
int_sqrt64(u64 x)
{
	return (u32)int_sqrt(x);
}
# 7 "./include/linux/math64.h" 2
# 1 "./arch/arm64/include/generated/asm/div64.h" 1
# 8 "./include/linux/math64.h" 2
# 1 "./include/vdso/math64.h" 1

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
u32 __iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
	u32 ret = 0;

	while (dividend >= divisor) {
		asm("" : "+rm"(dividend));

		dividend -= divisor;
		ret++;
	}

	*remainder = dividend;

	return ret;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
mul_u64_u32_add_u64_shr(u64 a, u32 mul, u64 b, unsigned int shift)
{
	return (u64)((((unsigned __int128)a * mul) + b) >> shift);
}
# 9 "./include/linux/math64.h" 2
# 26 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
	*remainder = dividend % divisor;
	return dividend / divisor;
}
# 40 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
	*remainder = dividend % divisor;
	return dividend / divisor;
}
# 54 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u64 div64_u64_rem(u64 dividend, u64 divisor, u64 *remainder)
{
	*remainder = dividend % divisor;
	return dividend / divisor;
}
# 67 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64 div64_u64(u64 dividend,
							      u64 divisor)
{
	return dividend / divisor;
}
# 79 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) s64 div64_s64(s64 dividend,
							      s64 divisor)
{
	return dividend / divisor;
}
# 127 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64 div_u64(u64 dividend,
							    u32 divisor)
{
	u32 remainder;
	return div_u64_rem(dividend, divisor, &remainder);
}
# 142 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) s64 div_s64(s64 dividend,
							    s32 divisor)
{
	s32 remainder;
	return div_s64_rem(dividend, divisor, &remainder);
}

u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
mul_u32_u32(u32 a, u32 b)
{
	return (u64)a * b;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
add_u64_u32(u64 a, u32 b)
{
	return a + b;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
mul_u64_u32_shr(u64 a, u32 mul, unsigned int shift)
{
	return (u64)(((unsigned __int128)a * mul) >> shift);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
mul_u64_u64_shr(u64 a, u64 mul, unsigned int shift)
{
	return (u64)(((unsigned __int128)a * mul) >> shift);
}
# 250 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u64 mul_s64_u64_shr(s64 a, u64 b, unsigned int shift)
{
	u64 ret;

	ret = mul_u64_u64_shr(
		__builtin_choose_expr(
			__builtin_types_compatible_p(typeof(a),
						     signed long long) ||
				__builtin_types_compatible_p(
					typeof(a), unsigned long long),
			({
				signed long long __x = (a);
				__x < 0 ? -__x : __x;
			}),
			__builtin_choose_expr(
				__builtin_types_compatible_p(typeof(a),
							     signed long) ||
					__builtin_types_compatible_p(
						typeof(a), unsigned long),
				({
					signed long __x = (a);
					__x < 0 ? -__x : __x;
				}),
				__builtin_choose_expr(
					__builtin_types_compatible_p(
						typeof(a), signed int) ||
						__builtin_types_compatible_p(
							typeof(a), unsigned int),
					({
						signed int __x = (a);
						__x < 0 ? -__x : __x;
					}),
					__builtin_choose_expr(
						__builtin_types_compatible_p(
							typeof(a),
							signed short) ||
							__builtin_types_compatible_p(
								typeof(a),
								unsigned short),
						({
							signed short __x = (a);
							__x < 0 ? -__x : __x;
						}),
						__builtin_choose_expr(
							__builtin_types_compatible_p(
								typeof(a),
								signed char) ||
								__builtin_types_compatible_p(
									typeof(a),
									unsigned char),
							({
								signed char __x =
									(a);
								__x < 0 ? -__x :
									  __x;
							}),
							__builtin_choose_expr(
								__builtin_types_compatible_p(
									typeof(a),
									char),
								(char)({
									signed char __x =
										(a);
									__x < 0 ?
										-__x :
										__x;
								}),
								((void)0))))))),
		b, shift);

	if (a < 0)
		ret = -((s64)ret);

	return ret;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
mul_u64_u32_div(u64 a, u32 mul, u32 divisor)
{
	union {
		u64 ll;
		struct {
			u32 low, high;

		} l;
	} u, rl, rh;

	u.ll = a;
	rl.ll = mul_u32_u32(u.l.low, mul);
	rh.ll = mul_u32_u32(u.l.high, mul) + rl.l.high;

	rl.l.high = ({
		uint32_t __base = (divisor);
		uint32_t __rem;
		__rem = ((uint64_t)(rh.ll)) % __base;
		(rh.ll) = ((uint64_t)(rh.ll)) / __base;
		__rem;
	});

	({
		uint32_t __base = (divisor);
		uint32_t __rem;
		__rem = ((uint64_t)(rl.ll)) % __base;
		(rl.ll) = ((uint64_t)(rl.ll)) / __base;
		__rem;
	});

	rl.l.high = rh.l.low;
	return rl.ll;
}
# 310 "./include/linux/math64.h"
u64 mul_u64_add_u64_div_u64(u64 a, u64 b, u64 c, u64 d);
# 426 "./include/linux/math64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64 roundup_u64(u64 x, u32 y)
{
	return ({
		       u32 _tmp = (y);
		       div_u64((x) + _tmp - 1, _tmp);
	       }) *
	       y;
}
# 6 "./include/linux/time64.h" 2
# 1 "./include/vdso/time64.h" 1
# 7 "./include/linux/time64.h" 2

typedef __s64 time64_t;
typedef __u64 timeu64_t;

# 1 "./include/uapi/linux/time.h" 1

# 1 "./include/uapi/linux/time_types.h" 1

struct __kernel_timespec {
	__kernel_time64_t tv_sec;
	long long tv_nsec;
};

struct __kernel_itimerspec {
	struct __kernel_timespec it_interval;
	struct __kernel_timespec it_value;
};
# 25 "./include/uapi/linux/time_types.h"
struct __kernel_old_timeval {
	__kernel_long_t tv_sec;
	__kernel_long_t tv_usec;
};

struct __kernel_old_timespec {
	__kernel_old_time_t tv_sec;
	long tv_nsec;
};

struct __kernel_old_itimerval {
	struct __kernel_old_timeval it_interval;
	struct __kernel_old_timeval it_value;
};

struct __kernel_sock_timeval {
	__s64 tv_sec;
	__s64 tv_usec;
};
# 7 "./include/uapi/linux/time.h" 2
# 33 "./include/uapi/linux/time.h"
struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
};
# 12 "./include/linux/time64.h" 2

struct timespec64 {
	time64_t tv_sec;
	long tv_nsec;
};

struct itimerspec64 {
	struct timespec64 it_interval;
	struct timespec64 it_value;
};
# 46 "./include/linux/time64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
timespec64_equal(const struct timespec64 *a, const struct timespec64 *b)
{
	return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
timespec64_is_epoch(const struct timespec64 *ts)
{
	return ts->tv_sec == 0 && ts->tv_nsec == 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
timespec64_compare(const struct timespec64 *lhs, const struct timespec64 *rhs)
{
	if (lhs->tv_sec < rhs->tv_sec)
		return -1;
	if (lhs->tv_sec > rhs->tv_sec)
		return 1;
	return lhs->tv_nsec - rhs->tv_nsec;
}

extern void set_normalized_timespec64(struct timespec64 *ts, time64_t sec,
				      s64 nsec);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) struct timespec64
timespec64_add(struct timespec64 lhs, struct timespec64 rhs)
{
	struct timespec64 ts_delta;
	set_normalized_timespec64(&ts_delta, lhs.tv_sec + rhs.tv_sec,
				  lhs.tv_nsec + rhs.tv_nsec);
	return ts_delta;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) struct timespec64
timespec64_sub(struct timespec64 lhs, struct timespec64 rhs)
{
	struct timespec64 ts_delta;
	set_normalized_timespec64(&ts_delta, lhs.tv_sec - rhs.tv_sec,
				  lhs.tv_nsec - rhs.tv_nsec);
	return ts_delta;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
timespec64_valid(const struct timespec64 *ts)
{
	if (ts->tv_sec < 0)
		return false;

	if ((unsigned long)ts->tv_nsec >= 1000000000L)
		return false;
	return true;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
timespec64_valid_strict(const struct timespec64 *ts)
{
	if (!timespec64_valid(ts))
		return false;

	if ((unsigned long long)ts->tv_sec >=
	    (((s64) ~((u64)1 << 63)) / 1000000000L))
		return false;
	return true;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
timespec64_valid_settod(const struct timespec64 *ts)
{
	if (!timespec64_valid(ts))
		return false;

	if ((unsigned long long)ts->tv_sec >=
	    ((((s64) ~((u64)1 << 63)) / 1000000000L) -
	     (30LL * 365 * 24 * 3600)))
		return false;
	return true;
}
# 135 "./include/linux/time64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
s64 timespec64_to_ns(const struct timespec64 *ts)
{
	if (ts->tv_sec >= (((s64) ~((u64)1 << 63)) / 1000000000L))
		return ((s64) ~((u64)1 << 63));

	if (ts->tv_sec <= ((-((s64) ~((u64)1 << 63)) - 1) / 1000000000L))
		return (-((s64) ~((u64)1 << 63)) - 1);

	return ((s64)ts->tv_sec * 1000000000L) + ts->tv_nsec;
}

extern struct timespec64 ns_to_timespec64(s64 nsec);
# 163 "./include/linux/time64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void timespec64_add_ns(struct timespec64 *a,
							  u64 ns)
{
	a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
	a->tv_nsec = ns;
}

extern struct timespec64 timespec64_add_safe(const struct timespec64 lhs,
					     const struct timespec64 rhs);
# 10 "./include/linux/restart_block.h" 2

struct __kernel_timespec;
struct timespec;
struct old_timespec32;
struct pollfd;

enum timespec_type {
	TT_NONE = 0,
	TT_NATIVE = 1,
	TT_COMPAT = 2,
};

struct restart_block {
	unsigned long arch_data;
	long (*fn)(struct restart_block *);
	union {
		struct {
			u32 *uaddr;
			u32 val;
			u32 flags;
			u32 bitset;
			ktime_t time;
			u32 *uaddr2;
		} futex;

		struct {
			clockid_t clockid;
			enum timespec_type type;
			union {
				struct __kernel_timespec *rmtp;
				struct old_timespec32 *compat_rmtp;
			};
			ktime_t expires;
		} nanosleep;

		struct {
			struct pollfd *ufds;
			int nfds;
			int has_timeout;
			struct timespec64 end_time;
		} poll;
	};
};

extern long do_no_restart_syscall(struct restart_block *parm);
# 15 "./include/linux/thread_info.h" 2
# 1 "./include/linux/errno.h" 1

# 1 "./include/uapi/linux/errno.h" 1
# 1 "./arch/arm64/include/generated/uapi/asm/errno.h" 1
# 2 "./include/uapi/linux/errno.h" 2
# 6 "./include/linux/errno.h" 2
# 16 "./include/linux/thread_info.h" 2

# 1 "./arch/arm64/include/asm/current.h" 1

struct task_struct;

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) struct task_struct *
get_current(void)
{
	unsigned long sp_el0;

	asm("mrs %0, sp_el0" : "=r"(sp_el0));

	return (struct task_struct *)sp_el0;
}
# 24 "./include/linux/thread_info.h" 2

# 1 "./include/linux/bitops.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 6 "./include/linux/bitops.h" 2

# 1 "./include/linux/typecheck.h" 1
# 8 "./include/linux/bitops.h" 2
# 18 "./include/linux/bitops.h"
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);

# 1 "./include/asm-generic/bitops/generic-non-atomic.h" 1

# 1 "./arch/arm64/include/asm/barrier.h" 1
# 14 "./arch/arm64/include/asm/barrier.h"
# 1 "./arch/arm64/include/asm/alternative-macros.h" 1

# 1 "./arch/arm64/include/asm/cpucaps.h" 1

# 1 "./arch/arm64/include/generated/asm/cpucap-defs.h" 1
# 7 "./arch/arm64/include/asm/cpucaps.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
cpucap_is_possible(const unsigned int cap)
{
	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_109(void)
			__attribute__((__error__("cap must be a constant")));
		if (!(__builtin_constant_p(cap)))
			__compiletime_assert_109();
	} while (0);

	do {
		__attribute__((__noreturn__)) extern void
		__compiletime_assert_110(void)
			__attribute__((__error__("cap must be < ARM64_NCAPS")));
		if (!(cap < 125))
			__compiletime_assert_110();
	} while (0);

	switch (cap) {
	case 21:
		return 1;
	case 85:
		return 1;
	case 77:
	case 79:
	case 78:
		return 1;
	case 13:
		return 1;
	case 5:
	case 28:
		return 1;
	case 35:
		return 1;
	case 73:
		return 1;
	case 2:
		return 1;
	case 61:
		return 1;
	case 52:
		return 1;
	case 27:
		return 1;
	case 66:
		return 1;
	case 86:
		return 1;
	case 88:
		return 1;
	case 95:
		return 1;
	case 101:
		return 1;
	case 102:
		return 1;
	case 110:
		return 1;
	case 117:
		return 1;
	case 121:
		return 1;
	case 123:
		return 1;
	case 103:
		return 1;
	case 71:

		return true;
	case 50:
		return 1;
	case 45:
		return 1;
	}

	return true;
}
# 9 "./arch/arm64/include/asm/alternative-macros.h" 2
# 226 "./arch/arm64/include/asm/alternative-macros.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
alternative_has_cap_likely(const unsigned long cpucap)
{
	if (!cpucap_is_possible(cpucap))
		return false;

	asm goto(

		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"b	%l[l_no]"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word "
		"alt_cb_patch_nops"
		"- .\n"
		" .hword "
		"(1 << 15) | (%[cpucap])"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		"663:\n\t"
		"664:\n\t"
		".endif\n"

		:
		: [cpucap] "i"(cpucap)
		:
		: l_no);

	return true;
l_no:
	return false;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
alternative_has_cap_unlikely(const unsigned long cpucap)
{
	if (!cpucap_is_possible(cpucap))
		return false;

	asm goto(".if "
		 "1"
		 " == 1\n"
		 "661:\n\t"
		 "nop"
		 "\n"
		 "662:\n"
		 ".pushsection .altinstructions,\"a\"\n"
		 " .word 661b - .\n"
		 " .word 663f - .\n"
		 " .hword "
		 "%[cpucap]"
		 "\n"
		 " .byte 662b-661b\n"
		 " .byte 664f-663f\n"
		 ".popsection\n"
		 ".subsection 1\n"
		 "663:\n\t"
		 "b	%l[l_yes]"
		 "\n"
		 "664:\n\t"
		 ".org	. - (664b-663b) + (662b-661b)\n\t"
		 ".org	. - (662b-661b) + (664b-663b)\n\t"
		 ".previous\n"
		 ".endif\n"
		 :
		 : [cpucap] "i"(cpucap)
		 :
		 : l_yes);

	return false;
l_yes:
	return true;
}
# 15 "./arch/arm64/include/asm/barrier.h" 2
# 91 "./arch/arm64/include/asm/barrier.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
array_index_mask_nospec(unsigned long idx, unsigned long sz)
{
	unsigned long mask;

	asm volatile("	cmp	%1, %2\n"
		     "	sbc	%0, xzr, xzr\n"
		     : "=r"(mask)
		     : "r"(idx), "Ir"(sz)
		     : "cc");

	asm volatile("hint #20" : : : "memory");
	return mask;
}
# 222 "./arch/arm64/include/asm/barrier.h"
# 1 "./include/asm-generic/barrier.h" 1
# 223 "./arch/arm64/include/asm/barrier.h" 2
# 8 "./include/asm-generic/bitops/generic-non-atomic.h" 2
# 27 "./include/asm-generic/bitops/generic-non-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
generic___set_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);

	*p |= mask;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
generic___clear_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);

	*p &= ~mask;
}
# 54 "./include/asm-generic/bitops/generic-non-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
generic___change_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);

	*p ^= mask;
}
# 72 "./include/asm-generic/bitops/generic-non-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
generic___test_and_set_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);
	unsigned long old = *p;

	*p = old | mask;
	return (old & mask) != 0;
}
# 92 "./include/asm-generic/bitops/generic-non-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
generic___test_and_clear_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);
	unsigned long old = *p;

	*p = old & ~mask;
	return (old & mask) != 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
generic___test_and_change_bit(unsigned long nr, volatile unsigned long *addr)
{
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);
	unsigned long old = *p;

	*p = old ^ mask;
	return (old & mask) != 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
generic_test_bit(unsigned long nr, const volatile unsigned long *addr)
{
	return 1UL & (addr[((nr) / 64)] >> (nr & (64 - 1)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
generic_test_bit_acquire(unsigned long nr, const volatile unsigned long *addr)
{
	unsigned long *p = ((unsigned long *)addr) + ((nr) / 64);
	return 1UL &
	       (({
			union {
				__typeof_unqual__(*p) __val;
				char __c[1];
			} __u;
			typeof(p) __p = (p);
			do {
				__attribute__((__noreturn__)) extern void
				__compiletime_assert_111(void) __attribute__((__error__(
					"Need native word sized stores/loads for atomicity.")));
				if (!((sizeof(*p) == sizeof(char) ||
				       sizeof(*p) == sizeof(short) ||
				       sizeof(*p) == sizeof(int) ||
				       sizeof(*p) == sizeof(long))))
					__compiletime_assert_111();
			} while (0);
			kasan_check_read(__p, sizeof(*p));
			switch (sizeof(*p)) {
			case 1:
				asm volatile("ldarb %w0, %1"
					     : "=r"(*(__u8 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 2:
				asm volatile("ldarh %w0, %1"
					     : "=r"(*(__u16 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 4:
				asm volatile("ldar %w0, %1"
					     : "=r"(*(__u32 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 8:
				asm volatile("ldar %0, %1"
					     : "=r"(*(__u64 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			}
			(typeof(*p))__u.__val;
		}) >>
		(nr & (64 - 1)));
}
# 165 "./include/asm-generic/bitops/generic-non-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
const_test_bit(unsigned long nr, const volatile unsigned long *addr)
{
	const unsigned long *p = (const unsigned long *)addr + ((nr) / 64);
	unsigned long mask = ((((1UL))) << ((nr) % 64));
	unsigned long val = *p;

	return !!(val & mask);
}
# 29 "./include/linux/bitops.h" 2
# 67 "./include/linux/bitops.h"
# 1 "./arch/arm64/include/asm/bitops.h" 1
# 14 "./arch/arm64/include/asm/bitops.h"
# 1 "./include/asm-generic/bitops/builtin-__ffs.h" 1
# 11 "./include/asm-generic/bitops/builtin-__ffs.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
__attribute__((__const__)) unsigned int __ffs(unsigned long word)
{
	return __builtin_ctzl(word);
}
# 15 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/builtin-ffs.h" 1
# 16 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/builtin-__fls.h" 1
# 11 "./include/asm-generic/bitops/builtin-__fls.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
__attribute__((__const__)) unsigned int __fls(unsigned long word)
{
	return (sizeof(word) * 8) - 1 - __builtin_clzl(word);
}
# 17 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/builtin-fls.h" 1
# 12 "./include/asm-generic/bitops/builtin-fls.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
__attribute__((__const__)) int fls(unsigned int x)
{
	return x ? sizeof(x) * 8 - __builtin_clz(x) : 0;
}
# 18 "./arch/arm64/include/asm/bitops.h" 2

# 1 "./include/asm-generic/bitops/ffz.h" 1
# 20 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/fls64.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 6 "./include/asm-generic/bitops/fls64.h" 2
# 27 "./include/asm-generic/bitops/fls64.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __attribute__((__const__)) int fls64(__u64 x)
{
	if (x == 0)
		return 0;
	return __fls(x) + 1;
}
# 21 "./arch/arm64/include/asm/bitops.h" 2

# 1 "./include/asm-generic/bitops/sched.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 7 "./include/asm-generic/bitops/sched.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
sched_find_first_bit(const unsigned long *b)
{
	if (b[0])
		return __ffs(b[0]);
	return __ffs(b[1]) + 64;
# 30 "./include/asm-generic/bitops/sched.h"
}
# 23 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/hweight.h" 1

# 1 "./include/asm-generic/bitops/arch_hweight.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 6 "./include/asm-generic/bitops/arch_hweight.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned int
__arch_hweight32(unsigned int w)
{
	return __sw_hweight32(w);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned int
__arch_hweight16(unsigned int w)
{
	return __sw_hweight16(w);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned int
__arch_hweight8(unsigned int w)
{
	return __sw_hweight8(w);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__arch_hweight64(__u64 w)
{
	return __sw_hweight64(w);
}
# 6 "./include/asm-generic/bitops/hweight.h" 2
# 1 "./include/asm-generic/bitops/const_hweight.h" 1
# 7 "./include/asm-generic/bitops/hweight.h" 2
# 24 "./arch/arm64/include/asm/bitops.h" 2

# 1 "./include/asm-generic/bitops/atomic.h" 1

# 1 "./include/linux/atomic.h" 1

# 1 "./arch/arm64/include/asm/atomic.h" 1
# 16 "./arch/arm64/include/asm/atomic.h"
# 1 "./arch/arm64/include/asm/cmpxchg.h" 1
# 14 "./arch/arm64/include/asm/cmpxchg.h"
# 1 "./arch/arm64/include/asm/lse.h" 1

# 1 "./arch/arm64/include/asm/atomic_ll_sc.h" 1
# 95 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __ll_sc_atomic_add(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "add"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "add"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_add_return(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "add"
		     "_return"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "add"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     "l"
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_add_return_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "add"
		     "_return"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "add"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     ""
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_add_return_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "add"
		     "_return"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %2\n"
		     "	"
		     "add"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     ""
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_add_return_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "add"
		     "_return"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "add"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     "l"
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_add(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "add"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "add"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_add_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "add"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "add"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_add_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "add"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "add"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_add_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "add"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "add"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic_sub(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "sub"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "sub"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_sub_return(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "sub"
		     "_return"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "sub"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     "l"
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_sub_return_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "sub"
		     "_return"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "sub"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     ""
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_sub_return_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "sub"
		     "_return"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %2\n"
		     "	"
		     "sub"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     ""
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_sub_return_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "sub"
		     "_return"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %2\n"
		     "	"
		     "sub"
		     "	%w0, %w0, %w3\n"
		     "	st"
		     "l"
		     "xr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_sub(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "sub"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "sub"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_sub_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "sub"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "sub"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_sub_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "sub"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "sub"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_sub_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "sub"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "sub"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
# 106 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __ll_sc_atomic_and(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "and"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "and"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_and(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "and"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "and"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_and_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "and"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "and"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_and_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "and"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "and"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_and_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "and"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "and"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic_or(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "or"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "orr"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_or(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "or"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "orr"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_or_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "or"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "orr"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_or_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "or"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "orr"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_or_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "or"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "orr"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic_xor(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "xor"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "eor"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_xor(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "xor"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "eor"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_xor_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "xor"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "eor"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_xor_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "xor"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "eor"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_xor_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "xor"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "eor"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "K"
		       "r"(i)
		     : "memory");
	return result;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic_andnot(int i, atomic_t *v)
{
	unsigned long tmp;
	int result;
	asm volatile("// atomic_"
		     "andnot"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%w0, %2\n"
		     "	"
		     "bic"
		     "	%w0, %w0, %w3\n"
		     "	stxr	%w1, %w0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_andnot(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "andnot"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "bic"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_andnot_relaxed(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "andnot"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "bic"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_andnot_acquire(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "andnot"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%w0, %3\n"
		     "	"
		     "bic"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     ""
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__ll_sc_atomic_fetch_andnot_release(int i, atomic_t *v)
{
	unsigned long tmp;
	int val, result;
	asm volatile("// atomic_fetch_"
		     "andnot"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%w0, %3\n"
		     "	"
		     "bic"
		     "	%w1, %w0, %w4\n"
		     "	st"
		     "l"
		     "xr	%w2, %w1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}
# 191 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __ll_sc_atomic64_add(s64 i,
							     atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "add"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "add"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_add_return(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "add"
		     "_return"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "add"
		     "	%0, %0, %3\n"
		     "	st"
		     "l"
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_add_return_relaxed(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "add"
		     "_return"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "add"
		     "	%0, %0, %3\n"
		     "	st"
		     ""
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_add_return_acquire(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "add"
		     "_return"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %2\n"
		     "	"
		     "add"
		     "	%0, %0, %3\n"
		     "	st"
		     ""
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_add_return_release(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "add"
		     "_return"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "add"
		     "	%0, %0, %3\n"
		     "	st"
		     "l"
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_add(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "add"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "add"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_add_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "add"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "add"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_add_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "add"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "add"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_add_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "add"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "add"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "I"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic64_sub(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "sub"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "sub"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_sub_return(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "sub"
		     "_return"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "sub"
		     "	%0, %0, %3\n"
		     "	st"
		     "l"
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_sub_return_relaxed(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "sub"
		     "_return"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "sub"
		     "	%0, %0, %3\n"
		     "	st"
		     ""
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_sub_return_acquire(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "sub"
		     "_return"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %2\n"
		     "	"
		     "sub"
		     "	%0, %0, %3\n"
		     "	st"
		     ""
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_sub_return_release(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "sub"
		     "_return"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr	%0, %2\n"
		     "	"
		     "sub"
		     "	%0, %0, %3\n"
		     "	st"
		     "l"
		     "xr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_sub(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "sub"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "sub"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_sub_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "sub"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "sub"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_sub_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "sub"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "sub"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_sub_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "sub"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "sub"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "J"
		       "r"(i)
		     : "memory");
	return result;
}
# 202 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __ll_sc_atomic64_and(s64 i,
							     atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "and"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "and"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_and(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "and"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "and"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_and_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "and"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "and"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_and_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "and"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "and"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_and_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "and"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "and"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic64_or(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "or"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "orr"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_or(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "or"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "orr"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_or_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "or"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "orr"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_or_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "or"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "orr"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_or_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "or"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "orr"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic64_xor(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "xor"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "eor"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_xor(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "xor"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "eor"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_xor_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "xor"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "eor"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_xor_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "xor"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "eor"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_xor_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "xor"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "eor"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : "L"
		       "r"(i)
		     : "memory");
	return result;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__ll_sc_atomic64_andnot(s64 i, atomic64_t *v)
{
	s64 result;
	unsigned long tmp;
	asm volatile("// atomic64_"
		     "andnot"
		     "\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	"
		     "bic"
		     "	%0, %0, %3\n"
		     "	stxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_andnot(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "andnot"
		     ""
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "bic"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     "dmb ish"
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_andnot_relaxed(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "andnot"
		     "_relaxed"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "bic"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     :);
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_andnot_acquire(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "andnot"
		     "_acquire"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     "a"
		     "xr	%0, %3\n"
		     "	"
		     "bic"
		     "	%1, %0, %4\n"
		     "	st"
		     ""
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__ll_sc_atomic64_fetch_andnot_release(s64 i, atomic64_t *v)
{
	s64 result, val;
	unsigned long tmp;
	asm volatile("// atomic64_fetch_"
		     "andnot"
		     "_release"
		     "\n"
		     "	prfm	pstl1strm, %3\n"
		     "1:	ld"
		     ""
		     "xr	%0, %3\n"
		     "	"
		     "bic"
		     "	%1, %0, %4\n"
		     "	st"
		     "l"
		     "xr	%w2, %1, %3\n"
		     "	cbnz	%w2, 1b\n"
		     "	"
		     ""
		     : "=&r"(result), "=&r"(val), "=&r"(tmp), "+Q"(v->counter)
		     : ""
		       "r"(i)
		     : "memory");
	return result;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64
__ll_sc_atomic64_dec_if_positive(atomic64_t *v)
{
	s64 result;
	unsigned long tmp;

	asm volatile("// atomic64_dec_if_positive\n"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ldxr	%0, %2\n"
		     "	subs	%0, %0, #1\n"
		     "	b.lt	2f\n"
		     "	stlxr	%w1, %0, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	dmb	ish\n"
		     "2:"
		     : "=&r"(result), "=&r"(tmp), "+Q"(v->counter)
		     :
		     : "cc", "memory");

	return result;
}
# 278 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
u8 __ll_sc__cmpxchg_case_8(volatile void *ptr, unsigned long old, u8 new)
{
	unsigned long tmp;
	u8 oldval;
	if (8 < 32)
		old = (u8)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"b"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		"b"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u8 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		:);
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__ll_sc__cmpxchg_case_16(volatile void *ptr, unsigned long old, u16 new)
{
	unsigned long tmp;
	u16 oldval;
	if (16 < 32)
		old = (u16)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"h"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		"h"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u16 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		:);
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__ll_sc__cmpxchg_case_32(volatile void *ptr, unsigned long old, u32 new)
{
	unsigned long tmp;
	u32 oldval;
	if (32 < 32)
		old = (u32)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		""
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u32 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		:);
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__ll_sc__cmpxchg_case_64(volatile void *ptr, unsigned long old, u64 new)
{
	unsigned long tmp;
	u64 oldval;
	if (64 < 32)
		old = (u64)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		""
		"[oldval], %[v]\n"
		"	eor	%"
		""
		"[tmp], %"
		""
		"[oldval], %"
		""
		"[old]\n"
		"	cbnz	%"
		""
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		""
		"\t%w[tmp], %"
		""
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u64 *)ptr)
		: [old] "L"
			"r"(old),
		  [new] "r"(new)
		:);
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__ll_sc__cmpxchg_case_acq_8(volatile void *ptr, unsigned long old, u8 new)
{
	unsigned long tmp;
	u8 oldval;
	if (8 < 32)
		old = (u8)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		"a"
		"xr"
		"b"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		"b"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u8 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__ll_sc__cmpxchg_case_acq_16(volatile void *ptr, unsigned long old, u16 new)
{
	unsigned long tmp;
	u16 oldval;
	if (16 < 32)
		old = (u16)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		"a"
		"xr"
		"h"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		"h"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u16 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__ll_sc__cmpxchg_case_acq_32(volatile void *ptr, unsigned long old, u32 new)
{
	unsigned long tmp;
	u32 oldval;
	if (32 < 32)
		old = (u32)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		"a"
		"xr"
		""
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		""
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u32 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__ll_sc__cmpxchg_case_acq_64(volatile void *ptr, unsigned long old, u64 new)
{
	unsigned long tmp;
	u64 oldval;
	if (64 < 32)
		old = (u64)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		"a"
		"xr"
		""
		"\t%"
		""
		"[oldval], %[v]\n"
		"	eor	%"
		""
		"[tmp], %"
		""
		"[oldval], %"
		""
		"[old]\n"
		"	cbnz	%"
		""
		"[tmp], 2f\n"
		"	st"
		""
		"xr"
		""
		"\t%w[tmp], %"
		""
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u64 *)ptr)
		: [old] "L"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__ll_sc__cmpxchg_case_rel_8(volatile void *ptr, unsigned long old, u8 new)
{
	unsigned long tmp;
	u8 oldval;
	if (8 < 32)
		old = (u8)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"b"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		"b"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u8 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__ll_sc__cmpxchg_case_rel_16(volatile void *ptr, unsigned long old, u16 new)
{
	unsigned long tmp;
	u16 oldval;
	if (16 < 32)
		old = (u16)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"h"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		"h"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u16 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__ll_sc__cmpxchg_case_rel_32(volatile void *ptr, unsigned long old, u32 new)
{
	unsigned long tmp;
	u32 oldval;
	if (32 < 32)
		old = (u32)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		""
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u32 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__ll_sc__cmpxchg_case_rel_64(volatile void *ptr, unsigned long old, u64 new)
{
	unsigned long tmp;
	u64 oldval;
	if (64 < 32)
		old = (u64)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		""
		"[oldval], %[v]\n"
		"	eor	%"
		""
		"[tmp], %"
		""
		"[oldval], %"
		""
		"[old]\n"
		"	cbnz	%"
		""
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		""
		"\t%w[tmp], %"
		""
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		""
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u64 *)ptr)
		: [old] "L"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__ll_sc__cmpxchg_case_mb_8(volatile void *ptr, unsigned long old, u8 new)
{
	unsigned long tmp;
	u8 oldval;
	if (8 < 32)
		old = (u8)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"b"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		"b"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		"dmb ish"
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u8 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__ll_sc__cmpxchg_case_mb_16(volatile void *ptr, unsigned long old, u16 new)
{
	unsigned long tmp;
	u16 oldval;
	if (16 < 32)
		old = (u16)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		"h"
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		"h"
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		"dmb ish"
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u16 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__ll_sc__cmpxchg_case_mb_32(volatile void *ptr, unsigned long old, u32 new)
{
	unsigned long tmp;
	u32 oldval;
	if (32 < 32)
		old = (u32)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		"w"
		"[oldval], %[v]\n"
		"	eor	%"
		"w"
		"[tmp], %"
		"w"
		"[oldval], %"
		"w"
		"[old]\n"
		"	cbnz	%"
		"w"
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		""
		"\t%w[tmp], %"
		"w"
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		"dmb ish"
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u32 *)ptr)
		: [old] "K"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__ll_sc__cmpxchg_case_mb_64(volatile void *ptr, unsigned long old, u64 new)
{
	unsigned long tmp;
	u64 oldval;
	if (64 < 32)
		old = (u64)old;
	asm volatile(
		"	prfm	pstl1strm, %[v]\n"
		"1:	ld"
		""
		"xr"
		""
		"\t%"
		""
		"[oldval], %[v]\n"
		"	eor	%"
		""
		"[tmp], %"
		""
		"[oldval], %"
		""
		"[old]\n"
		"	cbnz	%"
		""
		"[tmp], 2f\n"
		"	st"
		"l"
		"xr"
		""
		"\t%w[tmp], %"
		""
		"[new], %[v]\n"
		"	cbnz	%w[tmp], 1b\n"
		"	"
		"dmb ish"
		"\n"
		"2:"
		: [tmp] "=&r"(tmp), [oldval] "=&r"(oldval), [v] "+Q"(*(u64 *)ptr)
		: [old] "L"
			"r"(old),
		  [new] "r"(new)
		: "memory");
	return oldval;
}

union __u128_halves {
	u128 full;
	struct {
		u64 low, high;
	};
};
# 332 "./arch/arm64/include/asm/atomic_ll_sc.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u128 __ll_sc__cmpxchg128(volatile u128 *ptr,
							    u128 old, u128 new)
{
	union __u128_halves r, o = { .full = (old) }, n = { .full = (new) };
	unsigned int tmp;
	asm volatile("// __cmpxchg128"
		     ""
		     "\n"
		     "       prfm    pstl1strm, %[v]\n"
		     "1:     ldxp    %[rl], %[rh], %[v]\n"
		     "       cmp     %[rl], %[ol]\n"
		     "       ccmp    %[rh], %[oh], 0, eq\n"
		     "       b.ne    2f\n"
		     "       st"
		     ""
		     "xp    %w[tmp], %[nl], %[nh], %[v]\n"
		     "       cbnz    %w[tmp], 1b\n"
		     "	"
		     ""
		     "\n"
		     "2:"
		     : [v] "+Q"(*(u128 *)ptr), [rl] "=&r"(r.low),
		       [rh] "=&r"(r.high), [tmp] "=&r"(tmp)
		     : [ol] "r"(o.low), [oh] "r"(o.high), [nl] "r"(n.low),
		       [nh] "r"(n.high)
		     : "cc");
	return r.full;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u128
__ll_sc__cmpxchg128_mb(volatile u128 *ptr, u128 old, u128 new)
{
	union __u128_halves r, o = { .full = (old) }, n = { .full = (new) };
	unsigned int tmp;
	asm volatile("// __cmpxchg128"
		     "_mb"
		     "\n"
		     "       prfm    pstl1strm, %[v]\n"
		     "1:     ldxp    %[rl], %[rh], %[v]\n"
		     "       cmp     %[rl], %[ol]\n"
		     "       ccmp    %[rh], %[oh], 0, eq\n"
		     "       b.ne    2f\n"
		     "       st"
		     "l"
		     "xp    %w[tmp], %[nl], %[nh], %[v]\n"
		     "       cbnz    %w[tmp], 1b\n"
		     "	"
		     "dmb ish"
		     "\n"
		     "2:"
		     : [v] "+Q"(*(u128 *)ptr), [rl] "=&r"(r.low),
		       [rh] "=&r"(r.high), [tmp] "=&r"(tmp)
		     : [ol] "r"(o.low), [oh] "r"(o.high), [nl] "r"(n.low),
		       [nh] "r"(n.high)
		     : "cc", "memory");
	return r.full;
}
# 6 "./arch/arm64/include/asm/lse.h" 2

# 1 "./arch/arm64/include/asm/alternative.h" 1
# 13 "./arch/arm64/include/asm/alternative.h"
struct alt_instr {
	s32 orig_offset;
	s32 alt_offset;
	u16 cpucap;
	u8 orig_len;
	u8 alt_len;
};

typedef void (*alternative_cb_t)(struct alt_instr *alt, __le32 *origptr,
				 __le32 *updptr, int nr_inst);

void __attribute__((__section__(".init.text"))) __attribute__((__cold__))
apply_boot_alternatives(void);
void __attribute__((__section__(".init.text"))) __attribute__((__cold__))
apply_alternatives_all(void);
bool alternative_is_applied(u16 cpucap);

int apply_alternatives_module(void *start, size_t length);

void alt_cb_patch_nops(struct alt_instr *alt, __le32 *origptr, __le32 *updptr,
		       int nr_inst);
# 13 "./arch/arm64/include/asm/lse.h" 2

# 1 "./arch/arm64/include/asm/atomic_lse.h" 1
# 24 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __lse_atomic_andnot(int i, atomic_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stclr"
		     "	%w[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic_or(int i, atomic_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stset"
		     "	%w[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic_xor(int i, atomic_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "steor"
		     "	%w[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic_add(int i, atomic_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stadd"
		     "	%w[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic_sub(int i, atomic_t *v)
{
	__lse_atomic_add(-i, v);
}
# 59 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_andnot_relaxed(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     ""
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_andnot_acquire(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "a"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_andnot_release(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "l"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_andnot(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "al"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_or_relaxed(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     ""
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_or_acquire(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "a"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_or_release(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "l"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_or(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "al"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_xor_relaxed(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     ""
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_xor_acquire(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "a"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_xor_release(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "l"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_xor(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "al"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_add_relaxed(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     ""
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_add_acquire(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "a"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_add_release(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "l"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_add(int i, atomic_t *v)
{
	int old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "al"
		     "	%w[i], %w[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
# 74 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_sub_relaxed(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_relaxed(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_sub_acquire(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_acquire(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_sub_release(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_release(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_sub(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add(-i, v);
}
# 94 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_add_return_relaxed(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_relaxed(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_sub_return_relaxed(int i, atomic_t *v)
{
	return __lse_atomic_fetch_sub(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_add_return_acquire(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_acquire(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_sub_return_acquire(int i, atomic_t *v)
{
	return __lse_atomic_fetch_sub(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_add_return_release(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add_release(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_sub_return_release(int i, atomic_t *v)
{
	return __lse_atomic_fetch_sub(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_add_return(int i, atomic_t *v)
{
	return __lse_atomic_fetch_add(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_sub_return(int i, atomic_t *v)
{
	return __lse_atomic_fetch_sub(i, v) - i;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic_and(int i, atomic_t *v)
{
	return __lse_atomic_andnot(~i, v);
}
# 113 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_and_relaxed(int i, atomic_t *v)
{
	return __lse_atomic_fetch_andnot_relaxed(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_and_acquire(int i, atomic_t *v)
{
	return __lse_atomic_fetch_andnot_acquire(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_and_release(int i, atomic_t *v)
{
	return __lse_atomic_fetch_andnot_release(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
__lse_atomic_fetch_and(int i, atomic_t *v)
{
	return __lse_atomic_fetch_andnot(~i, v);
}
# 131 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __lse_atomic64_andnot(s64 i,
							      atomic64_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stclr"
		     "	%[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic64_or(s64 i, atomic64_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stset"
		     "	%[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic64_xor(s64 i, atomic64_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "steor"
		     "	%[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic64_add(s64 i, atomic64_t *v)
{
	asm volatile(".arch_extension lse\n"
		     "	"
		     "stadd"
		     "	%[i], %[v]\n"
		     : [v] "+Q"(v->counter)
		     : [i] "r"(i));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic64_sub(s64 i, atomic64_t *v)
{
	__lse_atomic64_add(-i, v);
}
# 166 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_andnot_relaxed(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     ""
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_andnot_acquire(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "a"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_andnot_release(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "l"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_andnot(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldclr"
		     "al"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_or_relaxed(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     ""
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_or_acquire(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "a"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_or_release(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "l"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_or(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldset"
		     "al"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_xor_relaxed(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     ""
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_xor_acquire(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "a"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_xor_release(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "l"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_xor(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldeor"
		     "al"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_add_relaxed(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     ""
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_add_acquire(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "a"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_add_release(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "l"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_add(s64 i, atomic64_t *v)
{
	s64 old;
	asm volatile(".arch_extension lse\n"
		     "	"
		     "ldadd"
		     "al"
		     "	%[i], %[old], %[v]"
		     : [v] "+Q"(v->counter), [old] "=r"(old)
		     : [i] "r"(i)
		     : "memory");
	return old;
}
# 181 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_sub_relaxed(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_relaxed(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_sub_acquire(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_acquire(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_sub_release(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_release(-i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_sub(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add(-i, v);
}
# 201 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_add_return_relaxed(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_relaxed(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_sub_return_relaxed(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_sub_relaxed(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_add_return_acquire(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_acquire(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_sub_return_acquire(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_sub_acquire(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_add_return_release(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add_release(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_sub_return_release(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_sub_release(i, v) - i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_add_return(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_add(i, v) + i;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_sub_return(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_sub(i, v) - i;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__lse_atomic64_and(s64 i, atomic64_t *v)
{
	return __lse_atomic64_andnot(~i, v);
}
# 220 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_and_relaxed(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_andnot_relaxed(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_and_acquire(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_andnot_acquire(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_and_release(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_andnot_release(~i, v);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
__lse_atomic64_fetch_and(s64 i, atomic64_t *v)
{
	return __lse_atomic64_fetch_andnot(~i, v);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64
__lse_atomic64_dec_if_positive(atomic64_t *v)
{
	unsigned long tmp;

	asm volatile(".arch_extension lse\n"
		     "1:	ldr	%x[tmp], %[v]\n"
		     "	subs	%[ret], %x[tmp], #1\n"
		     "	b.lt	2f\n"
		     "	casal	%x[tmp], %[ret], %[v]\n"
		     "	sub	%x[tmp], %x[tmp], #1\n"
		     "	sub	%x[tmp], %x[tmp], %[ret]\n"
		     "	cbnz	%x[tmp], 1b\n"
		     "2:"
		     : [ret] "+&r"(v), [v] "+Q"(v->counter), [tmp] "=&r"(tmp)
		     :
		     : "cc", "memory");

	return (long)v;
}
# 265 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8 __lse__cmpxchg_case_8(volatile void *ptr,
							    u8 old, u8 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     ""
		     "b"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u8 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__lse__cmpxchg_case_16(volatile void *ptr, u16 old, u16 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     ""
		     "h"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u16 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__lse__cmpxchg_case_32(volatile void *ptr, u32 old, u32 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     ""
		     ""
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u32 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__lse__cmpxchg_case_64(volatile void *ptr, u64 old, u64 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     ""
		     ""
		     "	%"
		     "x"
		     "[old], %"
		     "x"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u64 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     :);
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__lse__cmpxchg_case_acq_8(volatile void *ptr, u8 old, u8 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "a"
		     "b"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u8 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__lse__cmpxchg_case_acq_16(volatile void *ptr, u16 old, u16 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "a"
		     "h"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u16 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__lse__cmpxchg_case_acq_32(volatile void *ptr, u32 old, u32 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "a"
		     ""
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u32 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__lse__cmpxchg_case_acq_64(volatile void *ptr, u64 old, u64 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "a"
		     ""
		     "	%"
		     "x"
		     "[old], %"
		     "x"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u64 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__lse__cmpxchg_case_rel_8(volatile void *ptr, u8 old, u8 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "l"
		     "b"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u8 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__lse__cmpxchg_case_rel_16(volatile void *ptr, u16 old, u16 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "l"
		     "h"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u16 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__lse__cmpxchg_case_rel_32(volatile void *ptr, u32 old, u32 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "l"
		     ""
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u32 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__lse__cmpxchg_case_rel_64(volatile void *ptr, u64 old, u64 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "l"
		     ""
		     "	%"
		     "x"
		     "[old], %"
		     "x"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u64 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8
__lse__cmpxchg_case_mb_8(volatile void *ptr, u8 old, u8 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "al"
		     "b"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u8 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16
__lse__cmpxchg_case_mb_16(volatile void *ptr, u16 old, u16 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "al"
		     "h"
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u16 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32
__lse__cmpxchg_case_mb_32(volatile void *ptr, u32 old, u32 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "al"
		     ""
		     "	%"
		     "w"
		     "[old], %"
		     "w"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u32 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
__lse__cmpxchg_case_mb_64(volatile void *ptr, u64 old, u64 new)
{
	asm volatile(".arch_extension lse\n"
		     "	cas"
		     "al"
		     ""
		     "	%"
		     "x"
		     "[old], %"
		     "x"
		     "[new], %[v]\n"
		     : [v] "+Q"(*(u64 *)ptr), [old] "+r"(old)
		     : [new] "rZ"(new)
		     : "memory");
	return old;
}
# 310 "./arch/arm64/include/asm/atomic_lse.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u128 __lse__cmpxchg128(volatile u128 *ptr,
							  u128 old, u128 new)
{
	union __u128_halves r, o = { .full = (old) }, n = { .full = (new) };
	register unsigned long x0 asm("x0") = o.low;
	register unsigned long x1 asm("x1") = o.high;
	register unsigned long x2 asm("x2") = n.low;
	register unsigned long x3 asm("x3") = n.high;
	register unsigned long x4 asm("x4") = (unsigned long)ptr;
	asm volatile(
		".arch_extension lse\n"
		"	casp"
		""
		"\t%[old1], %[old2], %[new1], %[new2], %[v]\n"
		: [old1] "+&r"(x0), [old2] "+&r"(x1), [v] "+Q"(*(u128 *)ptr)
		: [new1] "r"(x2), [new2] "r"(x3), [ptr] "r"(x4),
		  [oldval1] "r"(o.low), [oldval2] "r"(o.high)
		:);
	r.low = x0;
	r.high = x1;
	return r.full;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u128
__lse__cmpxchg128_mb(volatile u128 *ptr, u128 old, u128 new)
{
	union __u128_halves r, o = { .full = (old) }, n = { .full = (new) };
	register unsigned long x0 asm("x0") = o.low;
	register unsigned long x1 asm("x1") = o.high;
	register unsigned long x2 asm("x2") = n.low;
	register unsigned long x3 asm("x3") = n.high;
	register unsigned long x4 asm("x4") = (unsigned long)ptr;
	asm volatile(
		".arch_extension lse\n"
		"	casp"
		"al"
		"\t%[old1], %[old2], %[new1], %[new2], %[v]\n"
		: [old1] "+&r"(x0), [old2] "+&r"(x1), [v] "+Q"(*(u128 *)ptr)
		: [new1] "r"(x2), [new2] "r"(x3), [ptr] "r"(x4),
		  [oldval1] "r"(o.low), [oldval2] "r"(o.high)
		: "memory");
	r.low = x0;
	r.high = x1;
	return r.full;
}
# 15 "./arch/arm64/include/asm/lse.h" 2
# 15 "./arch/arm64/include/asm/cmpxchg.h" 2
# 45 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u8 __xchg_case_8(u8 x, volatile void *ptr)
{
	u8 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "b"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     "b"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     ""
		     "b"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u8 *)ptr)
		     : "r"(x)
		     :);
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__xchg_case_16(u16 x, volatile void *ptr)
{
	u16 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "h"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     "h"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     ""
		     "h"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u16 *)ptr)
		     : "r"(x)
		     :);
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__xchg_case_32(u32 x, volatile void *ptr)
{
	u32 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     ""
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     ""
		     ""
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u32 *)ptr)
		     : "r"(x)
		     :);
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__xchg_case_64(u64 x, volatile void *ptr)
{
	u64 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     ""
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     ""
		     "\t%w1, %"
		     ""
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     ""
		     ""
		     "\t%"
		     ""
		     "3, %"
		     ""
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u64 *)ptr)
		     : "r"(x)
		     :);
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__xchg_case_acq_8(u8 x, volatile void *ptr)
{
	u8 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr"
		     "b"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     "b"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     ""
		     "b"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u8 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__xchg_case_acq_16(u16 x, volatile void *ptr)
{
	u16 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr"
		     "h"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     "h"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     ""
		     "h"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u16 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__xchg_case_acq_32(u32 x, volatile void *ptr)
{
	u32 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr"
		     ""
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     ""
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     ""
		     ""
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u32 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__xchg_case_acq_64(u64 x, volatile void *ptr)
{
	u64 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     "a"
		     "xr"
		     ""
		     "\t%"
		     ""
		     "0, %2\n"
		     "	st"
		     ""
		     "xr"
		     ""
		     "\t%w1, %"
		     ""
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     ""
		     ""
		     "\t%"
		     ""
		     "3, %"
		     ""
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u64 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__xchg_case_rel_8(u8 x, volatile void *ptr)
{
	u8 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "b"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     "b"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     "l"
		     "b"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u8 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__xchg_case_rel_16(u16 x, volatile void *ptr)
{
	u16 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "h"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     "h"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     "l"
		     "h"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u16 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__xchg_case_rel_32(u32 x, volatile void *ptr)
{
	u32 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     ""
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     "l"
		     ""
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u32 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__xchg_case_rel_64(u64 x, volatile void *ptr)
{
	u64 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     ""
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     ""
		     "\t%w1, %"
		     ""
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     ""
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     ""
		     "l"
		     ""
		     "\t%"
		     ""
		     "3, %"
		     ""
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     ""
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u64 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__xchg_case_mb_8(u8 x, volatile void *ptr)
{
	u8 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "b"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     "b"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     "l"
		     "b"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     "nop"
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u8 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__xchg_case_mb_16(u16 x, volatile void *ptr)
{
	u16 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     "h"
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     "h"
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     "l"
		     "h"
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     "nop"
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u16 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__xchg_case_mb_32(u32 x, volatile void *ptr)
{
	u32 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     "w"
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     ""
		     "\t%w1, %"
		     "w"
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     "l"
		     ""
		     "\t%"
		     "w"
		     "3, %"
		     "w"
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     "nop"
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u32 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__xchg_case_mb_64(u64 x, volatile void *ptr)
{
	u64 ret;
	unsigned long tmp;
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "	prfm	pstl1strm, %2\n"
		     "1:	ld"
		     ""
		     "xr"
		     ""
		     "\t%"
		     ""
		     "0, %2\n"
		     "	st"
		     "l"
		     "xr"
		     ""
		     "\t%w1, %"
		     ""
		     "3, %2\n"
		     "	cbnz	%w1, 1b\n"
		     "	"
		     "dmb ish"
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "42"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     ".arch_extension lse\n"
		     "	swp"
		     "a"
		     "l"
		     ""
		     "\t%"
		     ""
		     "3, %"
		     ""
		     "0, %2\n"
		     ".rept	"
		     "3"
		     "\nnop\n.endr\n"
		     "	"
		     "nop"
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"
		     : "=&r"(ret), "=&r"(tmp), "+Q"(*(u64 *)ptr)
		     : "r"(x)
		     : "memory");
	return ret;
}
# 84 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__arch_xchg(unsigned long x, volatile void *ptr, int size)
{
	switch (size) {
	case 1:
		return __xchg_case_8(x, ptr);
	case 2:
		return __xchg_case_16(x, ptr);
	case 4:
		return __xchg_case_32(x, ptr);
	case 8:
		return __xchg_case_64(x, ptr);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_112(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_112();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__arch_xchg_acq(unsigned long x, volatile void *ptr, int size)
{
	switch (size) {
	case 1:
		return __xchg_case_acq_8(x, ptr);
	case 2:
		return __xchg_case_acq_16(x, ptr);
	case 4:
		return __xchg_case_acq_32(x, ptr);
	case 8:
		return __xchg_case_acq_64(x, ptr);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_113(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_113();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__arch_xchg_rel(unsigned long x, volatile void *ptr, int size)
{
	switch (size) {
	case 1:
		return __xchg_case_rel_8(x, ptr);
	case 2:
		return __xchg_case_rel_16(x, ptr);
	case 4:
		return __xchg_case_rel_32(x, ptr);
	case 8:
		return __xchg_case_rel_64(x, ptr);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_114(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_114();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__arch_xchg_mb(unsigned long x, volatile void *ptr, int size)
{
	switch (size) {
	case 1:
		return __xchg_case_mb_8(x, ptr);
	case 2:
		return __xchg_case_mb_16(x, ptr);
	case 4:
		return __xchg_case_mb_32(x, ptr);
	case 8:
		return __xchg_case_mb_64(x, ptr);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_115(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_115();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
# 115 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u8 __cmpxchg_case_8(volatile void *ptr, u8 old, u8 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_8(ptr, old, new) :
			__ll_sc__cmpxchg_case_8(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__cmpxchg_case_16(volatile void *ptr, u16 old, u16 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_16(ptr, old, new) :
			__ll_sc__cmpxchg_case_16(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__cmpxchg_case_32(volatile void *ptr, u32 old, u32 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_32(ptr, old, new) :
			__ll_sc__cmpxchg_case_32(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__cmpxchg_case_64(volatile void *ptr, u64 old, u64 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_64(ptr, old, new) :
			__ll_sc__cmpxchg_case_64(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__cmpxchg_case_acq_8(volatile void *ptr, u8 old, u8 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_acq_8(ptr, old, new) :
			__ll_sc__cmpxchg_case_acq_8(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__cmpxchg_case_acq_16(volatile void *ptr, u16 old, u16 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_acq_16(ptr, old, new) :
			__ll_sc__cmpxchg_case_acq_16(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__cmpxchg_case_acq_32(volatile void *ptr, u32 old, u32 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_acq_32(ptr, old, new) :
			__ll_sc__cmpxchg_case_acq_32(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__cmpxchg_case_acq_64(volatile void *ptr, u64 old, u64 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_acq_64(ptr, old, new) :
			__ll_sc__cmpxchg_case_acq_64(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__cmpxchg_case_rel_8(volatile void *ptr, u8 old, u8 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_rel_8(ptr, old, new) :
			__ll_sc__cmpxchg_case_rel_8(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__cmpxchg_case_rel_16(volatile void *ptr, u16 old, u16 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_rel_16(ptr, old, new) :
			__ll_sc__cmpxchg_case_rel_16(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__cmpxchg_case_rel_32(volatile void *ptr, u32 old, u32 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_rel_32(ptr, old, new) :
			__ll_sc__cmpxchg_case_rel_32(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__cmpxchg_case_rel_64(volatile void *ptr, u64 old, u64 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_rel_64(ptr, old, new) :
			__ll_sc__cmpxchg_case_rel_64(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__cmpxchg_case_mb_8(volatile void *ptr, u8 old, u8 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_mb_8(ptr, old, new) :
			__ll_sc__cmpxchg_case_mb_8(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__cmpxchg_case_mb_16(volatile void *ptr, u16 old, u16 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_mb_16(ptr, old, new) :
			__ll_sc__cmpxchg_case_mb_16(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__cmpxchg_case_mb_32(volatile void *ptr, u32 old, u32 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_mb_32(ptr, old, new) :
			__ll_sc__cmpxchg_case_mb_32(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__cmpxchg_case_mb_64(volatile void *ptr, u64 old, u64 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg_case_mb_64(ptr, old, new) :
			__ll_sc__cmpxchg_case_mb_64(ptr, old, new);
	});
}
# 142 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
u128 __cmpxchg128(volatile u128 *ptr, u128 old, u128 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg128(ptr, old, new) :
			__ll_sc__cmpxchg128(ptr, old, new);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u128
__cmpxchg128_mb(volatile u128 *ptr, u128 old, u128 new)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse__cmpxchg128_mb(ptr, old, new) :
			__ll_sc__cmpxchg128_mb(ptr, old, new);
	});
}
# 169 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new, int size)
{
	switch (size) {
	case 1:
		return __cmpxchg_case_8(ptr, old, new);
	case 2:
		return __cmpxchg_case_16(ptr, old, new);
	case 4:
		return __cmpxchg_case_32(ptr, old, new);
	case 8:
		return __cmpxchg_case_64(ptr, old, new);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_116(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_116();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__cmpxchg_acq(volatile void *ptr, unsigned long old, unsigned long new,
	      int size)
{
	switch (size) {
	case 1:
		return __cmpxchg_case_acq_8(ptr, old, new);
	case 2:
		return __cmpxchg_case_acq_16(ptr, old, new);
	case 4:
		return __cmpxchg_case_acq_32(ptr, old, new);
	case 8:
		return __cmpxchg_case_acq_64(ptr, old, new);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_117(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_117();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__cmpxchg_rel(volatile void *ptr, unsigned long old, unsigned long new,
	      int size)
{
	switch (size) {
	case 1:
		return __cmpxchg_case_rel_8(ptr, old, new);
	case 2:
		return __cmpxchg_case_rel_16(ptr, old, new);
	case 4:
		return __cmpxchg_case_rel_32(ptr, old, new);
	case 8:
		return __cmpxchg_case_rel_64(ptr, old, new);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_118(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_118();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
__cmpxchg_mb(volatile void *ptr, unsigned long old, unsigned long new, int size)
{
	switch (size) {
	case 1:
		return __cmpxchg_case_mb_8(ptr, old, new);
	case 2:
		return __cmpxchg_case_mb_16(ptr, old, new);
	case 4:
		return __cmpxchg_case_mb_32(ptr, old, new);
	case 8:
		return __cmpxchg_case_mb_64(ptr, old, new);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_119(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_119();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
# 231 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__cmpwait_case_8(volatile void *ptr, unsigned long val)
{
	unsigned long tmp;
	asm volatile("	sevl\n"
		     "	wfe\n"
		     "	ldxr"
		     "b"
		     "\t%"
		     "w"
		     "[tmp], %[v]\n"
		     "	eor	%"
		     "w"
		     "[tmp], %"
		     "w"
		     "[tmp], %"
		     "w"
		     "[val]\n"
		     "	cbnz	%"
		     "w"
		     "[tmp], 1f\n"
		     "	wfe\n"
		     "1:"
		     : [tmp] "=&r"(tmp), [v] "+Q"(*(u8 *)ptr)
		     : [val] "r"(val));
};
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__cmpwait_case_16(volatile void *ptr, unsigned long val)
{
	unsigned long tmp;
	asm volatile("	sevl\n"
		     "	wfe\n"
		     "	ldxr"
		     "h"
		     "\t%"
		     "w"
		     "[tmp], %[v]\n"
		     "	eor	%"
		     "w"
		     "[tmp], %"
		     "w"
		     "[tmp], %"
		     "w"
		     "[val]\n"
		     "	cbnz	%"
		     "w"
		     "[tmp], 1f\n"
		     "	wfe\n"
		     "1:"
		     : [tmp] "=&r"(tmp), [v] "+Q"(*(u16 *)ptr)
		     : [val] "r"(val));
};
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__cmpwait_case_32(volatile void *ptr, unsigned long val)
{
	unsigned long tmp;
	asm volatile("	sevl\n"
		     "	wfe\n"
		     "	ldxr"
		     ""
		     "\t%"
		     "w"
		     "[tmp], %[v]\n"
		     "	eor	%"
		     "w"
		     "[tmp], %"
		     "w"
		     "[tmp], %"
		     "w"
		     "[val]\n"
		     "	cbnz	%"
		     "w"
		     "[tmp], 1f\n"
		     "	wfe\n"
		     "1:"
		     : [tmp] "=&r"(tmp), [v] "+Q"(*(u32 *)ptr)
		     : [val] "r"(val));
};
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__cmpwait_case_64(volatile void *ptr, unsigned long val)
{
	unsigned long tmp;
	asm volatile("	sevl\n"
		     "	wfe\n"
		     "	ldxr"
		     ""
		     "\t%"
		     ""
		     "[tmp], %[v]\n"
		     "	eor	%"
		     ""
		     "[tmp], %"
		     ""
		     "[tmp], %"
		     ""
		     "[val]\n"
		     "	cbnz	%"
		     ""
		     "[tmp], 1f\n"
		     "	wfe\n"
		     "1:"
		     : [tmp] "=&r"(tmp), [v] "+Q"(*(u64 *)ptr)
		     : [val] "r"(val));
};
# 259 "./arch/arm64/include/asm/cmpxchg.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void __cmpwait(volatile void *ptr,
						  unsigned long val, int size)
{
	switch (size) {
	case 1:
		return __cmpwait_case_8(ptr, (u8)val);
	case 2:
		return __cmpwait_case_16(ptr, (u16)val);
	case 4:
		return __cmpwait_case_32(ptr, val);
	case 8:
		return __cmpwait_case_64(ptr, val);
	default:
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_120(void)
				__attribute__((__error__("BUILD_BUG failed")));
			if (!(!(1)))
				__compiletime_assert_120();
		} while (0);
	}
	do {
		do {
		} while (0);
		__builtin_unreachable();
	} while (0);
}
# 17 "./arch/arm64/include/asm/atomic.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void arch_atomic_andnot(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_andnot(i, v) :
						 __ll_sc_atomic_andnot(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic_or(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_or(i, v) :
						 __ll_sc_atomic_or(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic_xor(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_xor(i, v) :
						 __ll_sc_atomic_xor(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic_add(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_add(i, v) :
						 __ll_sc_atomic_add(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic_and(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_and(i, v) :
						 __ll_sc_atomic_and(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic_sub(int i, atomic_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic_sub(i, v) :
						 __ll_sc_atomic_sub(i, v);
	});
}
# 46 "./arch/arm64/include/asm/atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_andnot_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_andnot_relaxed(i, v) :
			__ll_sc_atomic_fetch_andnot_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_andnot_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_andnot_acquire(i, v) :
			__ll_sc_atomic_fetch_andnot_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_andnot_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_andnot_release(i, v) :
			__ll_sc_atomic_fetch_andnot_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_andnot(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_andnot(i, v) :
			__ll_sc_atomic_fetch_andnot(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_or_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_or_relaxed(i, v) :
			__ll_sc_atomic_fetch_or_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_or_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_or_acquire(i, v) :
			__ll_sc_atomic_fetch_or_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_or_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_or_release(i, v) :
			__ll_sc_atomic_fetch_or_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_or(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ? __lse_atomic_fetch_or(i, v) :
						 __ll_sc_atomic_fetch_or(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_xor_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_xor_relaxed(i, v) :
			__ll_sc_atomic_fetch_xor_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_xor_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_xor_acquire(i, v) :
			__ll_sc_atomic_fetch_xor_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_xor_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_xor_release(i, v) :
			__ll_sc_atomic_fetch_xor_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_xor(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ? __lse_atomic_fetch_xor(i, v) :
						 __ll_sc_atomic_fetch_xor(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_add_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_add_relaxed(i, v) :
			__ll_sc_atomic_fetch_add_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_add_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_add_acquire(i, v) :
			__ll_sc_atomic_fetch_add_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_add_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_add_release(i, v) :
			__ll_sc_atomic_fetch_add_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_add(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ? __lse_atomic_fetch_add(i, v) :
						 __ll_sc_atomic_fetch_add(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_and_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_and_relaxed(i, v) :
			__ll_sc_atomic_fetch_and_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_and_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_and_acquire(i, v) :
			__ll_sc_atomic_fetch_and_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_and_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_and_release(i, v) :
			__ll_sc_atomic_fetch_and_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_and(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ? __lse_atomic_fetch_and(i, v) :
						 __ll_sc_atomic_fetch_and(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_sub_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_sub_relaxed(i, v) :
			__ll_sc_atomic_fetch_sub_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_sub_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_sub_acquire(i, v) :
			__ll_sc_atomic_fetch_sub_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_sub_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_fetch_sub_release(i, v) :
			__ll_sc_atomic_fetch_sub_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_fetch_sub(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ? __lse_atomic_fetch_sub(i, v) :
						 __ll_sc_atomic_fetch_sub(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_add_return_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_add_return_relaxed(i, v) :
			__ll_sc_atomic_add_return_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_add_return_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_add_return_acquire(i, v) :
			__ll_sc_atomic_add_return_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_add_return_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_add_return_release(i, v) :
			__ll_sc_atomic_add_return_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_add_return(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_add_return(i, v) :
			__ll_sc_atomic_add_return(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_sub_return_relaxed(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_sub_return_relaxed(i, v) :
			__ll_sc_atomic_sub_return_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_sub_return_acquire(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_sub_return_acquire(i, v) :
			__ll_sc_atomic_sub_return_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_sub_return_release(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_sub_return_release(i, v) :
			__ll_sc_atomic_sub_return_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_atomic_sub_return(int i, atomic_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic_sub_return(i, v) :
			__ll_sc_atomic_sub_return(i, v);
	});
}
# 64 "./arch/arm64/include/asm/atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void arch_atomic64_andnot(long i,
							     atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_andnot(i, v) :
						 __ll_sc_atomic64_andnot(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic64_or(long i, atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_or(i, v) :
						 __ll_sc_atomic64_or(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic64_xor(long i, atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_xor(i, v) :
						 __ll_sc_atomic64_xor(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic64_add(long i, atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_add(i, v) :
						 __ll_sc_atomic64_add(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic64_and(long i, atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_and(i, v) :
						 __ll_sc_atomic64_and(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_atomic64_sub(long i, atomic64_t *v)
{
	({
		alternative_has_cap_likely(42) ? __lse_atomic64_sub(i, v) :
						 __ll_sc_atomic64_sub(i, v);
	});
}
# 85 "./arch/arm64/include/asm/atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_andnot_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_andnot_relaxed(i, v) :
			__ll_sc_atomic64_fetch_andnot_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_andnot_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_andnot_acquire(i, v) :
			__ll_sc_atomic64_fetch_andnot_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_andnot_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_andnot_release(i, v) :
			__ll_sc_atomic64_fetch_andnot_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_andnot(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_andnot(i, v) :
			__ll_sc_atomic64_fetch_andnot(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_or_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_or_relaxed(i, v) :
			__ll_sc_atomic64_fetch_or_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_or_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_or_acquire(i, v) :
			__ll_sc_atomic64_fetch_or_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_or_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_or_release(i, v) :
			__ll_sc_atomic64_fetch_or_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_or(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_or(i, v) :
			__ll_sc_atomic64_fetch_or(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_xor_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_xor_relaxed(i, v) :
			__ll_sc_atomic64_fetch_xor_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_xor_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_xor_acquire(i, v) :
			__ll_sc_atomic64_fetch_xor_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_xor_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_xor_release(i, v) :
			__ll_sc_atomic64_fetch_xor_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_xor(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_xor(i, v) :
			__ll_sc_atomic64_fetch_xor(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_add_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_add_relaxed(i, v) :
			__ll_sc_atomic64_fetch_add_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_add_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_add_acquire(i, v) :
			__ll_sc_atomic64_fetch_add_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_add_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_add_release(i, v) :
			__ll_sc_atomic64_fetch_add_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_add(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_add(i, v) :
			__ll_sc_atomic64_fetch_add(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_and_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_and_relaxed(i, v) :
			__ll_sc_atomic64_fetch_and_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_and_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_and_acquire(i, v) :
			__ll_sc_atomic64_fetch_and_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_and_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_and_release(i, v) :
			__ll_sc_atomic64_fetch_and_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_and(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_and(i, v) :
			__ll_sc_atomic64_fetch_and(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_sub_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_sub_relaxed(i, v) :
			__ll_sc_atomic64_fetch_sub_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_sub_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_sub_acquire(i, v) :
			__ll_sc_atomic64_fetch_sub_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_sub_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_sub_release(i, v) :
			__ll_sc_atomic64_fetch_sub_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_fetch_sub(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_fetch_sub(i, v) :
			__ll_sc_atomic64_fetch_sub(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_add_return_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_add_return_relaxed(i, v) :
			__ll_sc_atomic64_add_return_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_add_return_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_add_return_acquire(i, v) :
			__ll_sc_atomic64_add_return_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_add_return_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_add_return_release(i, v) :
			__ll_sc_atomic64_add_return_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_add_return(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_add_return(i, v) :
			__ll_sc_atomic64_add_return(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_sub_return_relaxed(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_sub_return_relaxed(i, v) :
			__ll_sc_atomic64_sub_return_relaxed(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_sub_return_acquire(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_sub_return_acquire(i, v) :
			__ll_sc_atomic64_sub_return_acquire(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_sub_return_release(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_sub_return_release(i, v) :
			__ll_sc_atomic64_sub_return_release(i, v);
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_sub_return(long i, atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_sub_return(i, v) :
			__ll_sc_atomic64_sub_return(i, v);
	});
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
arch_atomic64_dec_if_positive(atomic64_t *v)
{
	return ({
		alternative_has_cap_likely(42) ?
			__lse_atomic64_dec_if_positive(v) :
			__ll_sc_atomic64_dec_if_positive(v);
	});
}
# 8 "./include/linux/atomic.h" 2
# 80 "./include/linux/atomic.h"
# 1 "./include/linux/atomic/atomic-arch-fallback.h" 1
# 454 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_read(const atomic_t *v)
{
	return (*(const volatile __typeof_unqual__((v)->counter) *)&(
		(v)->counter));
}
# 470 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_read_acquire(const atomic_t *v)
{
	int ret;

	if ((sizeof(atomic_t) == sizeof(char) ||
	     sizeof(atomic_t) == sizeof(short) ||
	     sizeof(atomic_t) == sizeof(int) ||
	     sizeof(atomic_t) == sizeof(long))) {
		ret = ({
			union {
				__typeof_unqual__(*&(v)->counter) __val;
				char __c[1];
			} __u;
			typeof(&(v)->counter) __p = (&(v)->counter);
			do {
				__attribute__((__noreturn__)) extern void
				__compiletime_assert_121(void) __attribute__((__error__(
					"Need native word sized stores/loads for atomicity.")));
				if (!((sizeof(*&(v)->counter) == sizeof(char) ||
				       sizeof(*&(v)->counter) == sizeof(short) ||
				       sizeof(*&(v)->counter) == sizeof(int) ||
				       sizeof(*&(v)->counter) == sizeof(long))))
					__compiletime_assert_121();
			} while (0);
			kasan_check_read(__p, sizeof(*&(v)->counter));
			switch (sizeof(*&(v)->counter)) {
			case 1:
				asm volatile("ldarb %w0, %1"
					     : "=r"(*(__u8 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 2:
				asm volatile("ldarh %w0, %1"
					     : "=r"(*(__u16 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 4:
				asm volatile("ldar %w0, %1"
					     : "=r"(*(__u32 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 8:
				asm volatile("ldar %0, %1"
					     : "=r"(*(__u64 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			}
			(typeof(*&(v)->counter))__u.__val;
		});
	} else {
		ret = raw_atomic_read(v);
		do {
			do {
			} while (0);
			asm volatile("dmb "
				     "ish"
				     :
				     :
				     : "memory");
		} while (0);
	}

	return ret;
}
# 500 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_set(atomic_t *v, int i)
{
	do {
		*(volatile typeof(((v)->counter)) *)&(((v)->counter)) = ((i));
	} while (0);
}
# 517 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_set_release(atomic_t *v,
							       int i)
{
	if ((sizeof(atomic_t) == sizeof(char) ||
	     sizeof(atomic_t) == sizeof(short) ||
	     sizeof(atomic_t) == sizeof(int) ||
	     sizeof(atomic_t) == sizeof(long))) {
		do {
			do {
			} while (0);
			do {
				typeof(&(v)->counter) __p = (&(v)->counter);
				union {
					__typeof_unqual__(*&(v)->counter) __val;
					char __c[1];
				} __u = { .__val = (__typeof_unqual__(
						  *&(v)->counter))(i) };
				do {
					__attribute__((
						__noreturn__)) extern void
					__compiletime_assert_122(void)
						__attribute__((__error__(
							"Need native word sized stores/loads for atomicity.")));
					if (!((sizeof(*&(v)->counter) ==
						       sizeof(char) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(short) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(int) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(long))))
						__compiletime_assert_122();
				} while (0);
				kasan_check_write(__p, sizeof(*&(v)->counter));
				switch (sizeof(*&(v)->counter)) {
				case 1:
					asm volatile("stlrb %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u8 *)__u.__c)
						     : "memory");
					break;
				case 2:
					asm volatile("stlrh %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u16 *)__u.__c)
						     : "memory");
					break;
				case 4:
					asm volatile("stlr %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u32 *)__u.__c)
						     : "memory");
					break;
				case 8:
					asm volatile("stlr %x1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u64 *)__u.__c)
						     : "memory");
					break;
				}
			} while (0);
		} while (0);
	} else {
		do {
			do {
			} while (0);
			asm volatile("dmb "
				     "ish"
				     :
				     :
				     : "memory");
		} while (0);
		raw_atomic_set(v, i);
	}
}
# 543 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_add(int i, atomic_t *v)
{
	arch_atomic_add(i, v);
}
# 560 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_add_return(int i, atomic_t *v)
{
	return arch_atomic_add_return(i, v);
# 574 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 587 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_add_return_acquire(int i, atomic_t *v)
{
	return arch_atomic_add_return_acquire(i, v);
# 601 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 614 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_add_return_release(int i, atomic_t *v)
{
	return arch_atomic_add_return_release(i, v);
# 627 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 640 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_add_return_relaxed(int i, atomic_t *v)
{
	return arch_atomic_add_return_relaxed(i, v);
}
# 663 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_add(int i, atomic_t *v)
{
	return arch_atomic_fetch_add(i, v);
# 677 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 690 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_add_acquire(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_add_acquire(i, v);
# 704 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 717 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_add_release(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_add_release(i, v);
# 730 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 743 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_add_relaxed(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_add_relaxed(i, v);
}
# 766 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_sub(int i, atomic_t *v)
{
	arch_atomic_sub(i, v);
}
# 783 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_sub_return(int i, atomic_t *v)
{
	return arch_atomic_sub_return(i, v);
# 797 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 810 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_sub_return_acquire(int i, atomic_t *v)
{
	return arch_atomic_sub_return_acquire(i, v);
# 824 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 837 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_sub_return_release(int i, atomic_t *v)
{
	return arch_atomic_sub_return_release(i, v);
# 850 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 863 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_sub_return_relaxed(int i, atomic_t *v)
{
	return arch_atomic_sub_return_relaxed(i, v);
}
# 886 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_sub(int i, atomic_t *v)
{
	return arch_atomic_fetch_sub(i, v);
# 900 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 913 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_sub_acquire(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_sub_acquire(i, v);
# 927 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 940 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_sub_release(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_sub_release(i, v);
# 953 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 966 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_sub_relaxed(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_sub_relaxed(i, v);
}
# 988 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_inc(atomic_t *v)
{
	raw_atomic_add(1, v);
}
# 1008 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_inc_return(atomic_t *v)
{
# 1020 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return(1, v);
}
# 1034 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_inc_return_acquire(atomic_t *v)
{
# 1046 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return_acquire(1, v);
}
# 1060 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_inc_return_release(atomic_t *v)
{
# 1071 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return_release(1, v);
}
# 1085 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_inc_return_relaxed(atomic_t *v)
{
	return raw_atomic_add_return_relaxed(1, v);
}
# 1107 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_inc(atomic_t *v)
{
# 1119 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_add(1, v);
}
# 1133 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_inc_acquire(atomic_t *v)
{
# 1145 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_add_acquire(1, v);
}
# 1159 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_inc_release(atomic_t *v)
{
# 1170 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_add_release(1, v);
}
# 1184 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_inc_relaxed(atomic_t *v)
{
	return raw_atomic_fetch_add_relaxed(1, v);
}
# 1206 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_dec(atomic_t *v)
{
	raw_atomic_sub(1, v);
}
# 1226 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_dec_return(atomic_t *v)
{
# 1238 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_sub_return(1, v);
}
# 1252 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_dec_return_acquire(atomic_t *v)
{
# 1264 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_sub_return_acquire(1, v);
}
# 1278 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_dec_return_release(atomic_t *v)
{
# 1289 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_sub_return_release(1, v);
}
# 1303 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_dec_return_relaxed(atomic_t *v)
{
	return raw_atomic_sub_return_relaxed(1, v);
}
# 1325 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_dec(atomic_t *v)
{
# 1337 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_sub(1, v);
}
# 1351 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_dec_acquire(atomic_t *v)
{
# 1363 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_sub_acquire(1, v);
}
# 1377 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_dec_release(atomic_t *v)
{
# 1388 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_fetch_sub_release(1, v);
}
# 1402 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_dec_relaxed(atomic_t *v)
{
	return raw_atomic_fetch_sub_relaxed(1, v);
}
# 1425 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_and(int i, atomic_t *v)
{
	arch_atomic_and(i, v);
}
# 1442 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_and(int i, atomic_t *v)
{
	return arch_atomic_fetch_and(i, v);
# 1456 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1469 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_and_acquire(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_and_acquire(i, v);
# 1483 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1496 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_and_release(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_and_release(i, v);
# 1509 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1522 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_and_relaxed(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_and_relaxed(i, v);
}
# 1545 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_andnot(int i, atomic_t *v)
{
	arch_atomic_andnot(i, v);
}
# 1566 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_andnot(int i,
							       atomic_t *v)
{
	return arch_atomic_fetch_andnot(i, v);
# 1580 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1593 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_fetch_andnot_acquire(int i, atomic_t *v)
{
	return arch_atomic_fetch_andnot_acquire(i, v);
# 1607 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1620 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_fetch_andnot_release(int i, atomic_t *v)
{
	return arch_atomic_fetch_andnot_release(i, v);
# 1633 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1646 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_fetch_andnot_relaxed(int i, atomic_t *v)
{
	return arch_atomic_fetch_andnot_relaxed(i, v);
}
# 1669 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_or(int i, atomic_t *v)
{
	arch_atomic_or(i, v);
}
# 1686 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_or(int i, atomic_t *v)
{
	return arch_atomic_fetch_or(i, v);
# 1700 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1713 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_or_acquire(int i,
								   atomic_t *v)
{
	return arch_atomic_fetch_or_acquire(i, v);
# 1727 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1740 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_or_release(int i,
								   atomic_t *v)
{
	return arch_atomic_fetch_or_release(i, v);
# 1753 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1766 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_or_relaxed(int i,
								   atomic_t *v)
{
	return arch_atomic_fetch_or_relaxed(i, v);
}
# 1789 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_xor(int i, atomic_t *v)
{
	arch_atomic_xor(i, v);
}
# 1806 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_xor(int i, atomic_t *v)
{
	return arch_atomic_fetch_xor(i, v);
# 1820 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1833 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_xor_acquire(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_xor_acquire(i, v);
# 1847 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1860 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_xor_release(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_xor_release(i, v);
# 1873 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 1886 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_xor_relaxed(int i,
								    atomic_t *v)
{
	return arch_atomic_fetch_xor_relaxed(i, v);
}
# 1909 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_xchg(atomic_t *v, int new)
{
# 1921 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_mb(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 1936 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_xchg_acquire(atomic_t *v,
							       int new)
{
# 1948 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_acq(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 1963 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_xchg_release(atomic_t *v,
							       int new)
{
# 1974 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_rel(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 1989 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_xchg_relaxed(atomic_t *v,
							       int new)
{
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 2014 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_cmpxchg(atomic_t *v, int old,
							  int new)
{
# 2026 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_mb(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 2043 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_cmpxchg_acquire(atomic_t *v, int old, int new)
{
# 2055 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_acq(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 2072 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_cmpxchg_release(atomic_t *v, int old, int new)
{
# 2083 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_rel(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 2100 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
raw_atomic_cmpxchg_relaxed(atomic_t *v, int old, int new)
{
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 2126 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_try_cmpxchg(atomic_t *v, int *old, int new)
{
# 2138 "./include/linux/atomic/atomic-arch-fallback.h"
	int r, o = *old;
	r = raw_atomic_cmpxchg(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 2160 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_try_cmpxchg_acquire(atomic_t *v, int *old, int new)
{
# 2172 "./include/linux/atomic/atomic-arch-fallback.h"
	int r, o = *old;
	r = raw_atomic_cmpxchg_acquire(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 2194 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_try_cmpxchg_release(atomic_t *v, int *old, int new)
{
# 2205 "./include/linux/atomic/atomic-arch-fallback.h"
	int r, o = *old;
	r = raw_atomic_cmpxchg_release(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 2227 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_try_cmpxchg_relaxed(atomic_t *v, int *old, int new)
{
	int r, o = *old;
	r = raw_atomic_cmpxchg_relaxed(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 2254 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_sub_and_test(int i,
								atomic_t *v)
{
	return raw_atomic_sub_return(i, v) == 0;
}
# 2274 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_dec_and_test(atomic_t *v)
{
	return raw_atomic_dec_return(v) == 0;
}
# 2294 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_inc_and_test(atomic_t *v)
{
	return raw_atomic_inc_return(v) == 0;
}
# 2315 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_add_negative(int i,
								atomic_t *v)
{
# 2327 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return(i, v) < 0;
}
# 2342 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_add_negative_acquire(int i, atomic_t *v)
{
# 2354 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return_acquire(i, v) < 0;
}
# 2369 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_add_negative_release(int i, atomic_t *v)
{
# 2380 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic_add_return_release(i, v) < 0;
}
# 2395 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_add_negative_relaxed(int i, atomic_t *v)
{
	return raw_atomic_add_return_relaxed(i, v) < 0;
}
# 2420 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_fetch_add_unless(atomic_t *v,
								   int a, int u)
{
	int c = raw_atomic_read(v);

	do {
		if (__builtin_expect(!!(c == u), 0))
			break;
	} while (!raw_atomic_try_cmpxchg(v, &c, c + a));

	return c;
}
# 2450 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_add_unless(atomic_t *v,
							      int a, int u)
{
	return raw_atomic_fetch_add_unless(v, a, u) != u;
}
# 2471 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic_inc_not_zero(atomic_t *v)
{
	return raw_atomic_add_unless(v, 1, 0);
}
# 2492 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_inc_unless_negative(atomic_t *v)
{
	int c = raw_atomic_read(v);

	do {
		if (__builtin_expect(!!(c < 0), 0))
			return false;
	} while (!raw_atomic_try_cmpxchg(v, &c, c + 1));

	return true;
}
# 2520 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_dec_unless_positive(atomic_t *v)
{
	int c = raw_atomic_read(v);

	do {
		if (__builtin_expect(!!(c > 0), 0))
			return false;
	} while (!raw_atomic_try_cmpxchg(v, &c, c - 1));

	return true;
}
# 2548 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int raw_atomic_dec_if_positive(atomic_t *v)
{
	int dec, c = raw_atomic_read(v);

	do {
		dec = c - 1;
		if (__builtin_expect(!!(dec < 0), 0))
			break;
	} while (!raw_atomic_try_cmpxchg(v, &c, dec));

	return dec;
}
# 2580 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_read(const atomic64_t *v)
{
	return (*(const volatile __typeof_unqual__((v)->counter) *)&(
		(v)->counter));
}
# 2596 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_read_acquire(const atomic64_t *v)
{
	s64 ret;

	if ((sizeof(atomic64_t) == sizeof(char) ||
	     sizeof(atomic64_t) == sizeof(short) ||
	     sizeof(atomic64_t) == sizeof(int) ||
	     sizeof(atomic64_t) == sizeof(long))) {
		ret = ({
			union {
				__typeof_unqual__(*&(v)->counter) __val;
				char __c[1];
			} __u;
			typeof(&(v)->counter) __p = (&(v)->counter);
			do {
				__attribute__((__noreturn__)) extern void
				__compiletime_assert_123(void) __attribute__((__error__(
					"Need native word sized stores/loads for atomicity.")));
				if (!((sizeof(*&(v)->counter) == sizeof(char) ||
				       sizeof(*&(v)->counter) == sizeof(short) ||
				       sizeof(*&(v)->counter) == sizeof(int) ||
				       sizeof(*&(v)->counter) == sizeof(long))))
					__compiletime_assert_123();
			} while (0);
			kasan_check_read(__p, sizeof(*&(v)->counter));
			switch (sizeof(*&(v)->counter)) {
			case 1:
				asm volatile("ldarb %w0, %1"
					     : "=r"(*(__u8 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 2:
				asm volatile("ldarh %w0, %1"
					     : "=r"(*(__u16 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 4:
				asm volatile("ldar %w0, %1"
					     : "=r"(*(__u32 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			case 8:
				asm volatile("ldar %0, %1"
					     : "=r"(*(__u64 *)__u.__c)
					     : "Q"(*__p)
					     : "memory");
				break;
			}
			(typeof(*&(v)->counter))__u.__val;
		});
	} else {
		ret = raw_atomic64_read(v);
		do {
			do {
			} while (0);
			asm volatile("dmb "
				     "ish"
				     :
				     :
				     : "memory");
		} while (0);
	}

	return ret;
}
# 2626 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_set(atomic64_t *v, s64 i)
{
	do {
		*(volatile typeof(((v)->counter)) *)&(((v)->counter)) = ((i));
	} while (0);
}
# 2643 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_set_release(atomic64_t *v,
								 s64 i)
{
	if ((sizeof(atomic64_t) == sizeof(char) ||
	     sizeof(atomic64_t) == sizeof(short) ||
	     sizeof(atomic64_t) == sizeof(int) ||
	     sizeof(atomic64_t) == sizeof(long))) {
		do {
			do {
			} while (0);
			do {
				typeof(&(v)->counter) __p = (&(v)->counter);
				union {
					__typeof_unqual__(*&(v)->counter) __val;
					char __c[1];
				} __u = { .__val = (__typeof_unqual__(
						  *&(v)->counter))(i) };
				do {
					__attribute__((
						__noreturn__)) extern void
					__compiletime_assert_124(void)
						__attribute__((__error__(
							"Need native word sized stores/loads for atomicity.")));
					if (!((sizeof(*&(v)->counter) ==
						       sizeof(char) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(short) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(int) ||
					       sizeof(*&(v)->counter) ==
						       sizeof(long))))
						__compiletime_assert_124();
				} while (0);
				kasan_check_write(__p, sizeof(*&(v)->counter));
				switch (sizeof(*&(v)->counter)) {
				case 1:
					asm volatile("stlrb %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u8 *)__u.__c)
						     : "memory");
					break;
				case 2:
					asm volatile("stlrh %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u16 *)__u.__c)
						     : "memory");
					break;
				case 4:
					asm volatile("stlr %w1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u32 *)__u.__c)
						     : "memory");
					break;
				case 8:
					asm volatile("stlr %x1, %0"
						     : "=Q"(*__p)
						     : "rZ"(*(__u64 *)__u.__c)
						     : "memory");
					break;
				}
			} while (0);
		} while (0);
	} else {
		do {
			do {
			} while (0);
			asm volatile("dmb "
				     "ish"
				     :
				     :
				     : "memory");
		} while (0);
		raw_atomic64_set(v, i);
	}
}
# 2669 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_add(s64 i, atomic64_t *v)
{
	arch_atomic64_add(i, v);
}
# 2686 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_add_return(s64 i,
							       atomic64_t *v)
{
	return arch_atomic64_add_return(i, v);
# 2700 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2713 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_add_return_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_add_return_acquire(i, v);
# 2727 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2740 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_add_return_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_add_return_release(i, v);
# 2753 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2766 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_add_return_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_add_return_relaxed(i, v);
}
# 2789 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_add(s64 i,
							      atomic64_t *v)
{
	return arch_atomic64_fetch_add(i, v);
# 2803 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2816 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_add_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_add_acquire(i, v);
# 2830 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2843 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_add_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_add_release(i, v);
# 2856 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2869 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_add_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_add_relaxed(i, v);
}
# 2892 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_sub(s64 i, atomic64_t *v)
{
	arch_atomic64_sub(i, v);
}
# 2909 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_sub_return(s64 i,
							       atomic64_t *v)
{
	return arch_atomic64_sub_return(i, v);
# 2923 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2936 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_sub_return_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_sub_return_acquire(i, v);
# 2950 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2963 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_sub_return_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_sub_return_release(i, v);
# 2976 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 2989 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_sub_return_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_sub_return_relaxed(i, v);
}
# 3012 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_sub(s64 i,
							      atomic64_t *v)
{
	return arch_atomic64_fetch_sub(i, v);
# 3026 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3039 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_sub_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_sub_acquire(i, v);
# 3053 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3066 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_sub_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_sub_release(i, v);
# 3079 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3092 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_sub_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_sub_relaxed(i, v);
}
# 3114 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_inc(atomic64_t *v)
{
	raw_atomic64_add(1, v);
}
# 3134 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_inc_return(atomic64_t *v)
{
# 3146 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return(1, v);
}
# 3160 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_inc_return_acquire(atomic64_t *v)
{
# 3172 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return_acquire(1, v);
}
# 3186 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_inc_return_release(atomic64_t *v)
{
# 3197 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return_release(1, v);
}
# 3211 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_inc_return_relaxed(atomic64_t *v)
{
	return raw_atomic64_add_return_relaxed(1, v);
}
# 3233 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_inc(atomic64_t *v)
{
# 3245 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_add(1, v);
}
# 3259 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_inc_acquire(atomic64_t *v)
{
# 3271 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_add_acquire(1, v);
}
# 3285 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_inc_release(atomic64_t *v)
{
# 3296 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_add_release(1, v);
}
# 3310 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_inc_relaxed(atomic64_t *v)
{
	return raw_atomic64_fetch_add_relaxed(1, v);
}
# 3332 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_dec(atomic64_t *v)
{
	raw_atomic64_sub(1, v);
}
# 3352 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_dec_return(atomic64_t *v)
{
# 3364 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_sub_return(1, v);
}
# 3378 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_dec_return_acquire(atomic64_t *v)
{
# 3390 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_sub_return_acquire(1, v);
}
# 3404 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_dec_return_release(atomic64_t *v)
{
# 3415 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_sub_return_release(1, v);
}
# 3429 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_dec_return_relaxed(atomic64_t *v)
{
	return raw_atomic64_sub_return_relaxed(1, v);
}
# 3451 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_dec(atomic64_t *v)
{
# 3463 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_sub(1, v);
}
# 3477 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_dec_acquire(atomic64_t *v)
{
# 3489 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_sub_acquire(1, v);
}
# 3503 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_dec_release(atomic64_t *v)
{
# 3514 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_fetch_sub_release(1, v);
}
# 3528 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_dec_relaxed(atomic64_t *v)
{
	return raw_atomic64_fetch_sub_relaxed(1, v);
}
# 3551 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_and(s64 i, atomic64_t *v)
{
	arch_atomic64_and(i, v);
}
# 3568 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_and(s64 i,
							      atomic64_t *v)
{
	return arch_atomic64_fetch_and(i, v);
# 3582 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3595 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_and_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_and_acquire(i, v);
# 3609 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3622 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_and_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_and_release(i, v);
# 3635 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3648 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_and_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_and_relaxed(i, v);
}
# 3671 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_andnot(s64 i,
							    atomic64_t *v)
{
	arch_atomic64_andnot(i, v);
}
# 3692 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_andnot(s64 i,
								 atomic64_t *v)
{
	return arch_atomic64_fetch_andnot(i, v);
# 3706 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3719 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_andnot_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_andnot_acquire(i, v);
# 3733 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3746 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_andnot_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_andnot_release(i, v);
# 3759 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3772 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_andnot_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_andnot_relaxed(i, v);
}
# 3795 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_or(s64 i, atomic64_t *v)
{
	arch_atomic64_or(i, v);
}
# 3812 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_or(s64 i,
							     atomic64_t *v)
{
	return arch_atomic64_fetch_or(i, v);
# 3826 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3839 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_or_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_or_acquire(i, v);
# 3853 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3866 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_or_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_or_release(i, v);
# 3879 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3892 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_or_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_or_relaxed(i, v);
}
# 3915 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic64_xor(s64 i, atomic64_t *v)
{
	arch_atomic64_xor(i, v);
}
# 3932 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_fetch_xor(s64 i,
							      atomic64_t *v)
{
	return arch_atomic64_fetch_xor(i, v);
# 3946 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3959 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_xor_acquire(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_xor_acquire(i, v);
# 3973 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 3986 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_xor_release(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_xor_release(i, v);
# 3999 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 4012 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_xor_relaxed(s64 i, atomic64_t *v)
{
	return arch_atomic64_fetch_xor_relaxed(i, v);
}
# 4035 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_xchg(atomic64_t *v, s64 new)
{
# 4047 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_mb(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 4062 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_xchg_acquire(atomic64_t *v,
								 s64 new)
{
# 4074 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_acq(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 4089 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_xchg_release(atomic64_t *v,
								 s64 new)
{
# 4100 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg_rel(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 4115 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_xchg_relaxed(atomic64_t *v,
								 s64 new)
{
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__arch_xchg(
			(unsigned long)(new), (&v->counter),
			sizeof(*(&v->counter)));
		__ret;
	});
}
# 4140 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 raw_atomic64_cmpxchg(atomic64_t *v,
							    s64 old, s64 new)
{
# 4152 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_mb(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 4169 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_cmpxchg_acquire(atomic64_t *v, s64 old, s64 new)
{
# 4181 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_acq(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 4198 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_cmpxchg_release(atomic64_t *v, s64 old, s64 new)
{
# 4209 "./include/linux/atomic/atomic-arch-fallback.h"
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg_rel(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 4226 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_cmpxchg_relaxed(atomic64_t *v, s64 old, s64 new)
{
	return ({
		__typeof__(*(&v->counter)) __ret;
		__ret = (__typeof__(*(&v->counter)))__cmpxchg(
			(&v->counter), (unsigned long)(old),
			(unsigned long)(new), sizeof(*(&v->counter)));
		__ret;
	});
}
# 4252 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_try_cmpxchg(atomic64_t *v, s64 *old, s64 new)
{
# 4264 "./include/linux/atomic/atomic-arch-fallback.h"
	s64 r, o = *old;
	r = raw_atomic64_cmpxchg(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 4286 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_try_cmpxchg_acquire(atomic64_t *v, s64 *old, s64 new)
{
# 4298 "./include/linux/atomic/atomic-arch-fallback.h"
	s64 r, o = *old;
	r = raw_atomic64_cmpxchg_acquire(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 4320 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_try_cmpxchg_release(atomic64_t *v, s64 *old, s64 new)
{
# 4331 "./include/linux/atomic/atomic-arch-fallback.h"
	s64 r, o = *old;
	r = raw_atomic64_cmpxchg_release(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 4353 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_try_cmpxchg_relaxed(atomic64_t *v, s64 *old, s64 new)
{
	s64 r, o = *old;
	r = raw_atomic64_cmpxchg_relaxed(v, o, new);
	if (__builtin_expect(!!(r != o), 0))
		*old = r;
	return __builtin_expect(!!(r == o), 1);
}
# 4380 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_sub_and_test(s64 i,
								  atomic64_t *v)
{
	return raw_atomic64_sub_return(i, v) == 0;
}
# 4400 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_dec_and_test(atomic64_t *v)
{
	return raw_atomic64_dec_return(v) == 0;
}
# 4420 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_inc_and_test(atomic64_t *v)
{
	return raw_atomic64_inc_return(v) == 0;
}
# 4441 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_add_negative(s64 i,
								  atomic64_t *v)
{
# 4453 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return(i, v) < 0;
}
# 4468 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_add_negative_acquire(s64 i, atomic64_t *v)
{
# 4480 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return_acquire(i, v) < 0;
}
# 4495 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_add_negative_release(s64 i, atomic64_t *v)
{
# 4506 "./include/linux/atomic/atomic-arch-fallback.h"
	return raw_atomic64_add_return_release(i, v) < 0;
}
# 4521 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_add_negative_relaxed(s64 i, atomic64_t *v)
{
	return raw_atomic64_add_return_relaxed(i, v) < 0;
}
# 4546 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_fetch_add_unless(atomic64_t *v, s64 a, s64 u)
{
	s64 c = raw_atomic64_read(v);

	do {
		if (__builtin_expect(!!(c == u), 0))
			break;
	} while (!raw_atomic64_try_cmpxchg(v, &c, c + a));

	return c;
}
# 4576 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_add_unless(atomic64_t *v,
								s64 a, s64 u)
{
	return raw_atomic64_fetch_add_unless(v, a, u) != u;
}
# 4597 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool raw_atomic64_inc_not_zero(atomic64_t *v)
{
	return raw_atomic64_add_unless(v, 1, 0);
}
# 4618 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_inc_unless_negative(atomic64_t *v)
{
	s64 c = raw_atomic64_read(v);

	do {
		if (__builtin_expect(!!(c < 0), 0))
			return false;
	} while (!raw_atomic64_try_cmpxchg(v, &c, c + 1));

	return true;
}
# 4646 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic64_dec_unless_positive(atomic64_t *v)
{
	s64 c = raw_atomic64_read(v);

	do {
		if (__builtin_expect(!!(c > 0), 0))
			return false;
	} while (!raw_atomic64_try_cmpxchg(v, &c, c - 1));

	return true;
}
# 4674 "./include/linux/atomic/atomic-arch-fallback.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 raw_atomic64_dec_if_positive(atomic64_t *v)
{
	return arch_atomic64_dec_if_positive(v);
# 4690 "./include/linux/atomic/atomic-arch-fallback.h"
}
# 81 "./include/linux/atomic.h" 2
# 1 "./include/linux/atomic/atomic-long.h" 1
# 10 "./include/linux/atomic/atomic-long.h"
# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 11 "./include/linux/atomic/atomic-long.h" 2

typedef atomic64_t atomic_long_t;
# 34 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_read(const atomic_long_t *v)
{
	return raw_atomic64_read(v);
}
# 54 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_read_acquire(const atomic_long_t *v)
{
	return raw_atomic64_read_acquire(v);
}
# 75 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_set(atomic_long_t *v,
							    long i)
{
	raw_atomic64_set(v, i);
}
# 96 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
raw_atomic_long_set_release(atomic_long_t *v, long i)
{
	raw_atomic64_set_release(v, i);
}
# 117 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_add(long i,
							    atomic_long_t *v)
{
	raw_atomic64_add(i, v);
}
# 138 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_add_return(long i, atomic_long_t *v)
{
	return raw_atomic64_add_return(i, v);
}
# 159 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_add_return_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_add_return_acquire(i, v);
}
# 180 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_add_return_release(long i, atomic_long_t *v)
{
	return raw_atomic64_add_return_release(i, v);
}
# 201 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_add_return_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_add_return_relaxed(i, v);
}
# 222 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_add(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_add(i, v);
}
# 243 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_add_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_add_acquire(i, v);
}
# 264 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_add_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_add_release(i, v);
}
# 285 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_add_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_add_relaxed(i, v);
}
# 306 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_sub(long i,
							    atomic_long_t *v)
{
	raw_atomic64_sub(i, v);
}
# 327 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_sub_return(long i, atomic_long_t *v)
{
	return raw_atomic64_sub_return(i, v);
}
# 348 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_sub_return_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_sub_return_acquire(i, v);
}
# 369 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_sub_return_release(long i, atomic_long_t *v)
{
	return raw_atomic64_sub_return_release(i, v);
}
# 390 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_sub_return_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_sub_return_relaxed(i, v);
}
# 411 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_sub(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_sub(i, v);
}
# 432 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_sub_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_sub_acquire(i, v);
}
# 453 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_sub_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_sub_release(i, v);
}
# 474 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_sub_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_sub_relaxed(i, v);
}
# 494 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_inc(atomic_long_t *v)
{
	raw_atomic64_inc(v);
}
# 514 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_inc_return(atomic_long_t *v)
{
	return raw_atomic64_inc_return(v);
}
# 534 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_inc_return_acquire(atomic_long_t *v)
{
	return raw_atomic64_inc_return_acquire(v);
}
# 554 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_inc_return_release(atomic_long_t *v)
{
	return raw_atomic64_inc_return_release(v);
}
# 574 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_inc_return_relaxed(atomic_long_t *v)
{
	return raw_atomic64_inc_return_relaxed(v);
}
# 594 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_inc(atomic_long_t *v)
{
	return raw_atomic64_fetch_inc(v);
}
# 614 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_inc_acquire(atomic_long_t *v)
{
	return raw_atomic64_fetch_inc_acquire(v);
}
# 634 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_inc_release(atomic_long_t *v)
{
	return raw_atomic64_fetch_inc_release(v);
}
# 654 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_inc_relaxed(atomic_long_t *v)
{
	return raw_atomic64_fetch_inc_relaxed(v);
}
# 674 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_dec(atomic_long_t *v)
{
	raw_atomic64_dec(v);
}
# 694 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_dec_return(atomic_long_t *v)
{
	return raw_atomic64_dec_return(v);
}
# 714 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_dec_return_acquire(atomic_long_t *v)
{
	return raw_atomic64_dec_return_acquire(v);
}
# 734 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_dec_return_release(atomic_long_t *v)
{
	return raw_atomic64_dec_return_release(v);
}
# 754 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_dec_return_relaxed(atomic_long_t *v)
{
	return raw_atomic64_dec_return_relaxed(v);
}
# 774 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_dec(atomic_long_t *v)
{
	return raw_atomic64_fetch_dec(v);
}
# 794 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_dec_acquire(atomic_long_t *v)
{
	return raw_atomic64_fetch_dec_acquire(v);
}
# 814 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_dec_release(atomic_long_t *v)
{
	return raw_atomic64_fetch_dec_release(v);
}
# 834 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_dec_relaxed(atomic_long_t *v)
{
	return raw_atomic64_fetch_dec_relaxed(v);
}
# 855 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_and(long i,
							    atomic_long_t *v)
{
	raw_atomic64_and(i, v);
}
# 876 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_and(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_and(i, v);
}
# 897 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_and_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_and_acquire(i, v);
}
# 918 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_and_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_and_release(i, v);
}
# 939 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_and_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_and_relaxed(i, v);
}
# 960 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_andnot(long i,
							       atomic_long_t *v)
{
	raw_atomic64_andnot(i, v);
}
# 981 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_andnot(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_andnot(i, v);
}
# 1002 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_andnot_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_andnot_acquire(i, v);
}
# 1023 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_andnot_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_andnot_release(i, v);
}
# 1044 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_andnot_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_andnot_relaxed(i, v);
}
# 1065 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_or(long i,
							   atomic_long_t *v)
{
	raw_atomic64_or(i, v);
}
# 1086 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_or(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_or(i, v);
}
# 1107 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_or_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_or_acquire(i, v);
}
# 1128 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_or_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_or_release(i, v);
}
# 1149 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_or_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_or_relaxed(i, v);
}
# 1170 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void raw_atomic_long_xor(long i,
							    atomic_long_t *v)
{
	raw_atomic64_xor(i, v);
}
# 1191 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_xor(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_xor(i, v);
}
# 1212 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_xor_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_xor_acquire(i, v);
}
# 1233 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_xor_release(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_xor_release(i, v);
}
# 1254 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_xor_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_fetch_xor_relaxed(i, v);
}
# 1275 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long raw_atomic_long_xchg(atomic_long_t *v,
							     long new)
{
	return raw_atomic64_xchg(v, new);
}
# 1296 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_xchg_acquire(atomic_long_t *v, long new)
{
	return raw_atomic64_xchg_acquire(v, new);
}
# 1317 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_xchg_release(atomic_long_t *v, long new)
{
	return raw_atomic64_xchg_release(v, new);
}
# 1338 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_xchg_relaxed(atomic_long_t *v, long new)
{
	return raw_atomic64_xchg_relaxed(v, new);
}
# 1361 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_cmpxchg(atomic_long_t *v, long old, long new)
{
	return raw_atomic64_cmpxchg(v, old, new);
}
# 1384 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_cmpxchg_acquire(atomic_long_t *v, long old, long new)
{
	return raw_atomic64_cmpxchg_acquire(v, old, new);
}
# 1407 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_cmpxchg_release(atomic_long_t *v, long old, long new)
{
	return raw_atomic64_cmpxchg_release(v, old, new);
}
# 1430 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_cmpxchg_relaxed(atomic_long_t *v, long old, long new)
{
	return raw_atomic64_cmpxchg_relaxed(v, old, new);
}
# 1454 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_try_cmpxchg(atomic_long_t *v, long *old, long new)
{
	return raw_atomic64_try_cmpxchg(v, (s64 *)old, new);
}
# 1478 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_try_cmpxchg_acquire(atomic_long_t *v, long *old, long new)
{
	return raw_atomic64_try_cmpxchg_acquire(v, (s64 *)old, new);
}
# 1502 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_try_cmpxchg_release(atomic_long_t *v, long *old, long new)
{
	return raw_atomic64_try_cmpxchg_release(v, (s64 *)old, new);
}
# 1526 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_try_cmpxchg_relaxed(atomic_long_t *v, long *old, long new)
{
	return raw_atomic64_try_cmpxchg_relaxed(v, (s64 *)old, new);
}
# 1547 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_sub_and_test(long i, atomic_long_t *v)
{
	return raw_atomic64_sub_and_test(i, v);
}
# 1567 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_dec_and_test(atomic_long_t *v)
{
	return raw_atomic64_dec_and_test(v);
}
# 1587 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_inc_and_test(atomic_long_t *v)
{
	return raw_atomic64_inc_and_test(v);
}
# 1608 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_add_negative(long i, atomic_long_t *v)
{
	return raw_atomic64_add_negative(i, v);
}
# 1629 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_add_negative_acquire(long i, atomic_long_t *v)
{
	return raw_atomic64_add_negative_acquire(i, v);
}
# 1650 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_add_negative_release(long i, atomic_long_t *v)
{
	return raw_atomic64_add_negative_release(i, v);
}
# 1671 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_add_negative_relaxed(long i, atomic_long_t *v)
{
	return raw_atomic64_add_negative_relaxed(i, v);
}
# 1694 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_fetch_add_unless(atomic_long_t *v, long a, long u)
{
	return raw_atomic64_fetch_add_unless(v, a, u);
}
# 1717 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_add_unless(atomic_long_t *v, long a, long u)
{
	return raw_atomic64_add_unless(v, a, u);
}
# 1738 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_inc_not_zero(atomic_long_t *v)
{
	return raw_atomic64_inc_not_zero(v);
}
# 1759 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_inc_unless_negative(atomic_long_t *v)
{
	return raw_atomic64_inc_unless_negative(v);
}
# 1780 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
raw_atomic_long_dec_unless_positive(atomic_long_t *v)
{
	return raw_atomic64_dec_unless_positive(v);
}
# 1801 "./include/linux/atomic/atomic-long.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
raw_atomic_long_dec_if_positive(atomic_long_t *v)
{
	return raw_atomic64_dec_if_positive(v);
}
# 82 "./include/linux/atomic.h" 2
# 1 "./include/linux/atomic/atomic-instrumented.h" 1
# 17 "./include/linux/atomic/atomic-instrumented.h"
# 1 "./include/linux/instrumented.h" 1
# 14 "./include/linux/instrumented.h"
# 1 "./include/linux/kmsan-checks.h" 1
# 77 "./include/linux/kmsan-checks.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kmsan_poison_memory(const void *address, size_t size, gfp_t flags)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kmsan_unpoison_memory(const void *address, size_t size)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kmsan_check_memory(const void *address, size_t size)
{
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kmsan_copy_to_user(void *to, const void *from, size_t to_copy, size_t left)
{
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
kmsan_memmove(void *to, const void *from, size_t to_copy)
{
}
# 15 "./include/linux/instrumented.h" 2
# 25 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void instrument_read(const volatile void *v,
							size_t size)
{
	kasan_check_read(v, size);
	kcsan_check_access(v, size, 0);
}
# 39 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void instrument_write(const volatile void *v,
							 size_t size)
{
	kasan_check_write(v, size);
	kcsan_check_access(v, size, (1 << 0));
}
# 53 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_read_write(const volatile void *v, size_t size)
{
	kasan_check_write(v, size);
	kcsan_check_access(v, size, (1 << 1) | (1 << 0));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_atomic_check_alignment(const volatile void *v, size_t size)
{
	if (0) {
		unsigned int mask = size - 1;

		if (0)
			mask &= sizeof(struct { long x; }
				       __attribute__((__aligned__))) -
				1;
		({
			int __ret_warn_on = !!((unsigned long)v & mask);
			if (__builtin_expect(!!(__ret_warn_on), 0))
				asm volatile(
					".pushsection __bug_table,\"aw\"; .align 2; 14470: .long 14471f - .; .pushsection .rodata.str,\"aMS\",@progbits,1; 14472: .string \"./include/linux/instrumented.h\"; .popsection; .long 14472b - .; .short 67; .short (1 << 0)|((1 << 1) | ((9) << 8)); .align 2; .popsection; 14471: brk 0x800");
			;
			__builtin_expect(!!(__ret_warn_on), 0);
		});
	}
}
# 80 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_atomic_read(const volatile void *v, size_t size)
{
	kasan_check_read(v, size);
	kcsan_check_access(v, size, (1 << 2));
	instrument_atomic_check_alignment(v, size);
}
# 95 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_atomic_write(const volatile void *v, size_t size)
{
	kasan_check_write(v, size);
	kcsan_check_access(v, size, (1 << 2) | (1 << 0));
	instrument_atomic_check_alignment(v, size);
}
# 110 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_atomic_read_write(const volatile void *v, size_t size)
{
	kasan_check_write(v, size);
	kcsan_check_access(v, size, (1 << 2) | (1 << 0) | (1 << 1));
	instrument_atomic_check_alignment(v, size);
}
# 126 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_copy_to_user(void *to, const void *from, unsigned long n)
{
	kasan_check_read(from, n);
	kcsan_check_access(from, n, 0);
	kmsan_copy_to_user(to, from, n, 0);
}
# 143 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_copy_from_user_before(const void *to, const void *from,
				 unsigned long n)
{
	kasan_check_write(to, n);
	kcsan_check_access(to, n, (1 << 0));
}
# 160 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_copy_from_user_after(const void *to, const void *from,
				unsigned long n, unsigned long left)
{
	kmsan_unpoison_memory(to, n - left);
}
# 176 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_memcpy_before(void *to, const void *from, unsigned long n)
{
	kasan_check_write(to, n);
	kasan_check_read(from, n);
	kcsan_check_access(to, n, (1 << 0));
	kcsan_check_access(from, n, 0);
}
# 195 "./include/linux/instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
instrument_memcpy_after(void *to, const void *from, unsigned long n,
			unsigned long left)
{
	kmsan_memmove(to, from, n - left);
}
# 18 "./include/linux/atomic/atomic-instrumented.h" 2
# 29 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_read(const atomic_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic_read(v);
}
# 46 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_read_acquire(const atomic_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic_read_acquire(v);
}
# 64 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_set(atomic_t *v, int i)
{
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic_set(v, i);
}
# 82 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_set_release(atomic_t *v, int i)
{
	do {
	} while (0);
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic_set_release(v, i);
}
# 101 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_add(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_add(i, v);
}
# 119 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_add_return(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_return(i, v);
}
# 138 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_add_return_acquire(int i,
								 atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_return_acquire(i, v);
}
# 156 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_add_return_release(int i,
								 atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_return_release(i, v);
}
# 175 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_add_return_relaxed(int i,
								 atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_return_relaxed(i, v);
}
# 193 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_add(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_add(i, v);
}
# 212 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_add_acquire(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_add_acquire(i, v);
}
# 230 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_add_release(int i,
								atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_add_release(i, v);
}
# 249 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_add_relaxed(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_add_relaxed(i, v);
}
# 267 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_sub(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_sub(i, v);
}
# 285 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_sub_return(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_sub_return(i, v);
}
# 304 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_sub_return_acquire(int i,
								 atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_sub_return_acquire(i, v);
}
# 322 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_sub_return_release(int i,
								 atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_sub_return_release(i, v);
}
# 341 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_sub_return_relaxed(int i,
								 atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_sub_return_relaxed(i, v);
}
# 359 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_sub(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_sub(i, v);
}
# 378 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_sub_acquire(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_sub_acquire(i, v);
}
# 396 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_sub_release(int i,
								atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_sub_release(i, v);
}
# 415 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_sub_relaxed(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_sub_relaxed(i, v);
}
# 432 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_inc(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_inc(v);
}
# 449 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_inc_return(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_return(v);
}
# 467 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_inc_return_acquire(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_return_acquire(v);
}
# 484 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_inc_return_release(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_return_release(v);
}
# 502 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_inc_return_relaxed(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_return_relaxed(v);
}
# 519 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_inc(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_inc(v);
}
# 537 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_inc_acquire(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_inc_acquire(v);
}
# 554 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_inc_release(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_inc_release(v);
}
# 572 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_inc_relaxed(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_inc_relaxed(v);
}
# 589 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_dec(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_dec(v);
}
# 606 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_dec_return(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_return(v);
}
# 624 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_dec_return_acquire(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_return_acquire(v);
}
# 641 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_dec_return_release(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_return_release(v);
}
# 659 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_dec_return_relaxed(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_return_relaxed(v);
}
# 676 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_dec(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_dec(v);
}
# 694 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_dec_acquire(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_dec_acquire(v);
}
# 711 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_dec_release(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_dec_release(v);
}
# 729 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_dec_relaxed(atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_dec_relaxed(v);
}
# 747 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_and(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_and(i, v);
}
# 765 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_and(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_and(i, v);
}
# 784 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_and_acquire(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_and_acquire(i, v);
}
# 802 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_and_release(int i,
								atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_and_release(i, v);
}
# 821 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_and_relaxed(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_and_relaxed(i, v);
}
# 839 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_andnot(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_andnot(i, v);
}
# 857 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_andnot(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_andnot(i, v);
}
# 876 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_andnot_acquire(int i,
								   atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_andnot_acquire(i, v);
}
# 894 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_andnot_release(int i,
								   atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_andnot_release(i, v);
}
# 913 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_andnot_relaxed(int i,
								   atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_andnot_relaxed(i, v);
}
# 931 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_or(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_or(i, v);
}
# 949 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_or(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_or(i, v);
}
# 968 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_or_acquire(int i,
							       atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_or_acquire(i, v);
}
# 986 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_or_release(int i,
							       atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_or_release(i, v);
}
# 1005 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_or_relaxed(int i,
							       atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_or_relaxed(i, v);
}
# 1023 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_xor(int i, atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_xor(i, v);
}
# 1041 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_xor(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_xor(i, v);
}
# 1060 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_xor_acquire(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_xor_acquire(i, v);
}
# 1078 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_xor_release(int i,
								atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_xor_release(i, v);
}
# 1097 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_xor_relaxed(int i,
								atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_xor_relaxed(i, v);
}
# 1115 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_xchg(atomic_t *v, int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_xchg(v, new);
}
# 1134 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_xchg_acquire(atomic_t *v, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_xchg_acquire(v, new);
}
# 1152 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_xchg_release(atomic_t *v, int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_xchg_release(v, new);
}
# 1171 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_xchg_relaxed(atomic_t *v, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_xchg_relaxed(v, new);
}
# 1191 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_cmpxchg(atomic_t *v, int old,
						      int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_cmpxchg(v, old, new);
}
# 1212 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_cmpxchg_acquire(atomic_t *v,
							      int old, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_cmpxchg_acquire(v, old, new);
}
# 1232 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_cmpxchg_release(atomic_t *v,
							      int old, int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_cmpxchg_release(v, old, new);
}
# 1253 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_cmpxchg_relaxed(atomic_t *v,
							      int old, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_cmpxchg_relaxed(v, old, new);
}
# 1274 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_try_cmpxchg(atomic_t *v,
							   int *old, int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_try_cmpxchg(v, old, new);
}
# 1297 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_try_cmpxchg_acquire(atomic_t *v, int *old, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_try_cmpxchg_acquire(v, old, new);
}
# 1319 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_try_cmpxchg_release(atomic_t *v, int *old, int new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_try_cmpxchg_release(v, old, new);
}
# 1342 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_try_cmpxchg_relaxed(atomic_t *v, int *old, int new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_try_cmpxchg_relaxed(v, old, new);
}
# 1361 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_sub_and_test(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_sub_and_test(i, v);
}
# 1379 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_dec_and_test(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_and_test(v);
}
# 1397 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_inc_and_test(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_and_test(v);
}
# 1416 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_add_negative(int i, atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_negative(i, v);
}
# 1435 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_add_negative_acquire(int i,
								    atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_negative_acquire(i, v);
}
# 1453 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_add_negative_release(int i,
								    atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_negative_release(i, v);
}
# 1472 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_add_negative_relaxed(int i,
								    atomic_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_negative_relaxed(i, v);
}
# 1492 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_fetch_add_unless(atomic_t *v,
							       int a, int u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_fetch_add_unless(v, a, u);
}
# 1513 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_add_unless(atomic_t *v, int a,
							  int u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_add_unless(v, a, u);
}
# 1532 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_inc_not_zero(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_not_zero(v);
}
# 1551 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_inc_unless_negative(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_inc_unless_negative(v);
}
# 1570 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_dec_unless_positive(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_unless_positive(v);
}
# 1589 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int atomic_dec_if_positive(atomic_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_dec_if_positive(v);
}
# 1607 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_read(const atomic64_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic64_read(v);
}
# 1624 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_read_acquire(const atomic64_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic64_read_acquire(v);
}
# 1642 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_set(atomic64_t *v, s64 i)
{
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic64_set(v, i);
}
# 1660 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_set_release(atomic64_t *v,
							     s64 i)
{
	do {
	} while (0);
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic64_set_release(v, i);
}
# 1679 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_add(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_add(i, v);
}
# 1697 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_add_return(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_return(i, v);
}
# 1716 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_add_return_acquire(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_return_acquire(i, v);
}
# 1734 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_add_return_release(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_return_release(i, v);
}
# 1753 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_add_return_relaxed(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_return_relaxed(i, v);
}
# 1771 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_add(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_add(i, v);
}
# 1790 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_add_acquire(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_add_acquire(i, v);
}
# 1808 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_add_release(s64 i,
								  atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_add_release(i, v);
}
# 1827 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_add_relaxed(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_add_relaxed(i, v);
}
# 1845 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_sub(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_sub(i, v);
}
# 1863 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_sub_return(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_sub_return(i, v);
}
# 1882 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_sub_return_acquire(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_sub_return_acquire(i, v);
}
# 1900 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_sub_return_release(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_sub_return_release(i, v);
}
# 1919 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_sub_return_relaxed(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_sub_return_relaxed(i, v);
}
# 1937 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_sub(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_sub(i, v);
}
# 1956 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_sub_acquire(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_sub_acquire(i, v);
}
# 1974 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_sub_release(s64 i,
								  atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_sub_release(i, v);
}
# 1993 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_sub_relaxed(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_sub_relaxed(i, v);
}
# 2010 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_inc(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_inc(v);
}
# 2027 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_inc_return(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_return(v);
}
# 2045 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_inc_return_acquire(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_return_acquire(v);
}
# 2062 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_inc_return_release(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_return_release(v);
}
# 2080 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_inc_return_relaxed(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_return_relaxed(v);
}
# 2097 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_inc(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_inc(v);
}
# 2115 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_inc_acquire(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_inc_acquire(v);
}
# 2132 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_inc_release(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_inc_release(v);
}
# 2150 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_inc_relaxed(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_inc_relaxed(v);
}
# 2167 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_dec(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_dec(v);
}
# 2184 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_dec_return(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_return(v);
}
# 2202 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_dec_return_acquire(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_return_acquire(v);
}
# 2219 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_dec_return_release(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_return_release(v);
}
# 2237 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_dec_return_relaxed(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_return_relaxed(v);
}
# 2254 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_dec(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_dec(v);
}
# 2272 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_dec_acquire(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_dec_acquire(v);
}
# 2289 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_dec_release(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_dec_release(v);
}
# 2307 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_dec_relaxed(atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_dec_relaxed(v);
}
# 2325 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_and(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_and(i, v);
}
# 2343 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_and(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_and(i, v);
}
# 2362 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_and_acquire(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_and_acquire(i, v);
}
# 2380 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_and_release(s64 i,
								  atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_and_release(i, v);
}
# 2399 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_and_relaxed(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_and_relaxed(i, v);
}
# 2417 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_andnot(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_andnot(i, v);
}
# 2435 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_andnot(s64 i,
							     atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_andnot(i, v);
}
# 2454 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_fetch_andnot_acquire(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_andnot_acquire(i, v);
}
# 2472 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_fetch_andnot_release(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_andnot_release(i, v);
}
# 2491 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_fetch_andnot_relaxed(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_andnot_relaxed(i, v);
}
# 2509 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_or(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_or(i, v);
}
# 2527 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_or(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_or(i, v);
}
# 2546 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_or_acquire(s64 i,
								 atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_or_acquire(i, v);
}
# 2564 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_or_release(s64 i,
								 atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_or_release(i, v);
}
# 2583 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_or_relaxed(s64 i,
								 atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_or_relaxed(i, v);
}
# 2601 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic64_xor(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic64_xor(i, v);
}
# 2619 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_xor(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_xor(i, v);
}
# 2638 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_xor_acquire(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_xor_acquire(i, v);
}
# 2656 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_xor_release(s64 i,
								  atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_xor_release(i, v);
}
# 2675 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_xor_relaxed(s64 i,
								  atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_xor_relaxed(i, v);
}
# 2693 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_xchg(atomic64_t *v, s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_xchg(v, new);
}
# 2712 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_xchg_acquire(atomic64_t *v,
							     s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_xchg_acquire(v, new);
}
# 2730 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_xchg_release(atomic64_t *v,
							     s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_xchg_release(v, new);
}
# 2749 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_xchg_relaxed(atomic64_t *v,
							     s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_xchg_relaxed(v, new);
}
# 2769 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_cmpxchg(atomic64_t *v, s64 old,
							s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_cmpxchg(v, old, new);
}
# 2790 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_cmpxchg_acquire(atomic64_t *v, s64 old, s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_cmpxchg_acquire(v, old, new);
}
# 2810 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_cmpxchg_release(atomic64_t *v, s64 old, s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_cmpxchg_release(v, old, new);
}
# 2831 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__))
s64 atomic64_cmpxchg_relaxed(atomic64_t *v, s64 old, s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_cmpxchg_relaxed(v, old, new);
}
# 2852 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_try_cmpxchg(atomic64_t *v,
							     s64 *old, s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic64_try_cmpxchg(v, old, new);
}
# 2875 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_try_cmpxchg_acquire(atomic64_t *v, s64 *old, s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic64_try_cmpxchg_acquire(v, old, new);
}
# 2897 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_try_cmpxchg_release(atomic64_t *v, s64 *old, s64 new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic64_try_cmpxchg_release(v, old, new);
}
# 2920 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_try_cmpxchg_relaxed(atomic64_t *v, s64 *old, s64 new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic64_try_cmpxchg_relaxed(v, old, new);
}
# 2939 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_sub_and_test(s64 i,
							      atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_sub_and_test(i, v);
}
# 2957 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_dec_and_test(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_and_test(v);
}
# 2975 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_inc_and_test(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_and_test(v);
}
# 2994 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_add_negative(s64 i,
							      atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_negative(i, v);
}
# 3013 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_add_negative_acquire(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_negative_acquire(i, v);
}
# 3031 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_add_negative_release(s64 i, atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_negative_release(i, v);
}
# 3050 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_add_negative_relaxed(s64 i, atomic64_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_negative_relaxed(i, v);
}
# 3070 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_fetch_add_unless(atomic64_t *v,
								 s64 a, s64 u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_fetch_add_unless(v, a, u);
}
# 3091 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_add_unless(atomic64_t *v,
							    s64 a, s64 u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_add_unless(v, a, u);
}
# 3110 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic64_inc_not_zero(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_not_zero(v);
}
# 3129 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_inc_unless_negative(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_inc_unless_negative(v);
}
# 3148 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic64_dec_unless_positive(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_unless_positive(v);
}
# 3167 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) s64 atomic64_dec_if_positive(atomic64_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic64_dec_if_positive(v);
}
# 3185 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_read(const atomic_long_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic_long_read(v);
}
# 3202 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_read_acquire(const atomic_long_t *v)
{
	instrument_atomic_read(v, sizeof(*v));
	return raw_atomic_long_read_acquire(v);
}
# 3220 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_set(atomic_long_t *v,
							long i)
{
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic_long_set(v, i);
}
# 3238 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
atomic_long_set_release(atomic_long_t *v, long i)
{
	do {
	} while (0);
	instrument_atomic_write(v, sizeof(*v));
	raw_atomic_long_set_release(v, i);
}
# 3257 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_add(long i,
							atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_add(i, v);
}
# 3275 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_add_return(long i,
							       atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_return(i, v);
}
# 3294 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_add_return_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_return_acquire(i, v);
}
# 3312 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_add_return_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_return_release(i, v);
}
# 3331 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_add_return_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_return_relaxed(i, v);
}
# 3349 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_add(long i,
							      atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_add(i, v);
}
# 3368 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_add_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_add_acquire(i, v);
}
# 3386 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_add_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_add_release(i, v);
}
# 3405 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_add_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_add_relaxed(i, v);
}
# 3423 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_sub(long i,
							atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_sub(i, v);
}
# 3441 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_sub_return(long i,
							       atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_sub_return(i, v);
}
# 3460 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_sub_return_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_sub_return_acquire(i, v);
}
# 3478 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_sub_return_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_sub_return_release(i, v);
}
# 3497 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_sub_return_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_sub_return_relaxed(i, v);
}
# 3515 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_sub(long i,
							      atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_sub(i, v);
}
# 3534 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_sub_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_sub_acquire(i, v);
}
# 3552 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_sub_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_sub_release(i, v);
}
# 3571 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_sub_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_sub_relaxed(i, v);
}
# 3588 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_inc(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_inc(v);
}
# 3605 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_inc_return(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_return(v);
}
# 3623 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_inc_return_acquire(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_return_acquire(v);
}
# 3640 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_inc_return_release(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_return_release(v);
}
# 3658 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_inc_return_relaxed(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_return_relaxed(v);
}
# 3675 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_inc(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_inc(v);
}
# 3693 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_inc_acquire(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_inc_acquire(v);
}
# 3710 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_inc_release(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_inc_release(v);
}
# 3728 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_inc_relaxed(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_inc_relaxed(v);
}
# 3745 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_dec(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_dec(v);
}
# 3762 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_dec_return(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_return(v);
}
# 3780 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_dec_return_acquire(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_return_acquire(v);
}
# 3797 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_dec_return_release(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_return_release(v);
}
# 3815 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_dec_return_relaxed(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_return_relaxed(v);
}
# 3832 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_dec(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_dec(v);
}
# 3850 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_dec_acquire(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_dec_acquire(v);
}
# 3867 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_dec_release(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_dec_release(v);
}
# 3885 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_dec_relaxed(atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_dec_relaxed(v);
}
# 3903 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_and(long i,
							atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_and(i, v);
}
# 3921 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_and(long i,
							      atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_and(i, v);
}
# 3940 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_and_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_and_acquire(i, v);
}
# 3958 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_and_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_and_release(i, v);
}
# 3977 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_and_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_and_relaxed(i, v);
}
# 3995 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_andnot(long i,
							   atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_andnot(i, v);
}
# 4013 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_andnot(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_andnot(i, v);
}
# 4032 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_andnot_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_andnot_acquire(i, v);
}
# 4050 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_andnot_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_andnot_release(i, v);
}
# 4069 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_andnot_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_andnot_relaxed(i, v);
}
# 4087 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_or(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_or(i, v);
}
# 4105 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_or(long i,
							     atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_or(i, v);
}
# 4124 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_or_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_or_acquire(i, v);
}
# 4142 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_or_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_or_release(i, v);
}
# 4161 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_or_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_or_relaxed(i, v);
}
# 4179 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void atomic_long_xor(long i,
							atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	raw_atomic_long_xor(i, v);
}
# 4197 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_fetch_xor(long i,
							      atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_xor(i, v);
}
# 4216 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_xor_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_xor_acquire(i, v);
}
# 4234 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_xor_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_xor_release(i, v);
}
# 4253 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_xor_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_xor_relaxed(i, v);
}
# 4271 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_xchg(atomic_long_t *v,
							 long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_xchg(v, new);
}
# 4290 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_xchg_acquire(atomic_long_t *v, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_xchg_acquire(v, new);
}
# 4308 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_xchg_release(atomic_long_t *v, long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_xchg_release(v, new);
}
# 4327 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_xchg_relaxed(atomic_long_t *v, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_xchg_relaxed(v, new);
}
# 4347 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long atomic_long_cmpxchg(atomic_long_t *v,
							    long old, long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_cmpxchg(v, old, new);
}
# 4368 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_cmpxchg_acquire(atomic_long_t *v, long old, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_cmpxchg_acquire(v, old, new);
}
# 4388 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_cmpxchg_release(atomic_long_t *v, long old, long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_cmpxchg_release(v, old, new);
}
# 4409 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_cmpxchg_relaxed(atomic_long_t *v, long old, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_cmpxchg_relaxed(v, old, new);
}
# 4430 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_try_cmpxchg(atomic_long_t *v, long *old, long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_long_try_cmpxchg(v, old, new);
}
# 4453 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_try_cmpxchg_acquire(atomic_long_t *v, long *old, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_long_try_cmpxchg_acquire(v, old, new);
}
# 4475 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_try_cmpxchg_release(atomic_long_t *v, long *old, long new)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_long_try_cmpxchg_release(v, old, new);
}
# 4498 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_try_cmpxchg_relaxed(atomic_long_t *v, long *old, long new)
{
	instrument_atomic_read_write(v, sizeof(*v));
	instrument_read_write(old, sizeof(*old));
	return raw_atomic_long_try_cmpxchg_relaxed(v, old, new);
}
# 4517 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_sub_and_test(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_sub_and_test(i, v);
}
# 4535 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_dec_and_test(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_and_test(v);
}
# 4553 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_inc_and_test(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_and_test(v);
}
# 4572 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_add_negative(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_negative(i, v);
}
# 4591 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_add_negative_acquire(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_negative_acquire(i, v);
}
# 4609 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_add_negative_release(long i, atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_negative_release(i, v);
}
# 4628 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_add_negative_relaxed(long i, atomic_long_t *v)
{
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_negative_relaxed(i, v);
}
# 4648 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_fetch_add_unless(atomic_long_t *v, long a, long u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_fetch_add_unless(v, a, u);
}
# 4669 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool atomic_long_add_unless(atomic_long_t *v,
							       long a, long u)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_add_unless(v, a, u);
}
# 4688 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_inc_not_zero(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_not_zero(v);
}
# 4707 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_inc_unless_negative(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_inc_unless_negative(v);
}
# 4726 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
atomic_long_dec_unless_positive(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_unless_positive(v);
}
# 4745 "./include/linux/atomic/atomic-instrumented.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) long
atomic_long_dec_if_positive(atomic_long_t *v)
{
	do {
	} while (0);
	instrument_atomic_read_write(v, sizeof(*v));
	return raw_atomic_long_dec_if_positive(v);
}
# 83 "./include/linux/atomic.h" 2
# 6 "./include/asm-generic/bitops/atomic.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void arch_set_bit(unsigned int nr,
						     volatile unsigned long *p)
{
	p += ((nr) / 64);
	raw_atomic_long_or(((((1UL))) << ((nr) % 64)), (atomic_long_t *)p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_clear_bit(unsigned int nr, volatile unsigned long *p)
{
	p += ((nr) / 64);
	raw_atomic_long_andnot(((((1UL))) << ((nr) % 64)), (atomic_long_t *)p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_change_bit(unsigned int nr, volatile unsigned long *p)
{
	p += ((nr) / 64);
	raw_atomic_long_xor(((((1UL))) << ((nr) % 64)), (atomic_long_t *)p);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_test_and_set_bit(unsigned int nr, volatile unsigned long *p)
{
	long old;
	unsigned long mask = ((((1UL))) << ((nr) % 64));

	p += ((nr) / 64);
	old = raw_atomic_long_fetch_or(mask, (atomic_long_t *)p);
	return !!(old & mask);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_test_and_clear_bit(unsigned int nr, volatile unsigned long *p)
{
	long old;
	unsigned long mask = ((((1UL))) << ((nr) % 64));

	p += ((nr) / 64);
	old = raw_atomic_long_fetch_andnot(mask, (atomic_long_t *)p);
	return !!(old & mask);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_test_and_change_bit(unsigned int nr, volatile unsigned long *p)
{
	long old;
	unsigned long mask = ((((1UL))) << ((nr) % 64));

	p += ((nr) / 64);
	old = raw_atomic_long_fetch_xor(mask, (atomic_long_t *)p);
	return !!(old & mask);
}

# 1 "./include/asm-generic/bitops/instrumented-atomic.h" 1
# 26 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void set_bit(long nr,
						volatile unsigned long *addr)
{
	instrument_atomic_write(addr + ((nr) / 64), sizeof(long));
	arch_set_bit(nr, addr);
}
# 39 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void clear_bit(long nr,
						  volatile unsigned long *addr)
{
	instrument_atomic_write(addr + ((nr) / 64), sizeof(long));
	arch_clear_bit(nr, addr);
}
# 55 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void change_bit(long nr,
						   volatile unsigned long *addr)
{
	instrument_atomic_write(addr + ((nr) / 64), sizeof(long));
	arch_change_bit(nr, addr);
}
# 68 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
test_and_set_bit(long nr, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_atomic_read_write(addr + ((nr) / 64), sizeof(long));
	return arch_test_and_set_bit(nr, addr);
}
# 82 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
test_and_clear_bit(long nr, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_atomic_read_write(addr + ((nr) / 64), sizeof(long));
	return arch_test_and_clear_bit(nr, addr);
}
# 96 "./include/asm-generic/bitops/instrumented-atomic.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
test_and_change_bit(long nr, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_atomic_read_write(addr + ((nr) / 64), sizeof(long));
	return arch_test_and_change_bit(nr, addr);
}
# 69 "./include/asm-generic/bitops/atomic.h" 2
# 26 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/lock.h" 1
# 18 "./include/asm-generic/bitops/lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
arch_test_and_set_bit_lock(unsigned int nr, volatile unsigned long *p)
{
	long old;
	unsigned long mask = ((((1UL))) << ((nr) % 64));

	p += ((nr) / 64);
	if (({
		    do {
			    __attribute__((__noreturn__)) extern void
			    __compiletime_assert_125(void) __attribute__((__error__(
				    "Unsupported access size for {READ,WRITE}_ONCE().")));
			    if (!((sizeof(*p) == sizeof(char) ||
				   sizeof(*p) == sizeof(short) ||
				   sizeof(*p) == sizeof(int) ||
				   sizeof(*p) == sizeof(long)) ||
				  sizeof(*p) == sizeof(long long)))
				    __compiletime_assert_125();
		    } while (0);
		    (*(const volatile __typeof_unqual__(*p) *)&(*p));
	    }) &
	    mask)
		return 1;

	old = raw_atomic_long_fetch_or_acquire(mask, (atomic_long_t *)p);
	return !!(old & mask);
}
# 40 "./include/asm-generic/bitops/lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
arch_clear_bit_unlock(unsigned int nr, volatile unsigned long *p)
{
	p += ((nr) / 64);
	raw_atomic_long_fetch_andnot_release(((((1UL))) << ((nr) % 64)),
					     (atomic_long_t *)p);
}
# 58 "./include/asm-generic/bitops/lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
arch___clear_bit_unlock(unsigned int nr, volatile unsigned long *p)
{
	unsigned long old;

	p += ((nr) / 64);
	old = ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_126(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*p) == sizeof(char) ||
			       sizeof(*p) == sizeof(short) ||
			       sizeof(*p) == sizeof(int) ||
			       sizeof(*p) == sizeof(long)) ||
			      sizeof(*p) == sizeof(long long)))
				__compiletime_assert_126();
		} while (0);
		(*(const volatile __typeof_unqual__(*p) *)&(*p));
	});
	old &= ~((((1UL))) << ((nr) % 64));
	raw_atomic_long_set_release((atomic_long_t *)p, old);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
arch_xor_unlock_is_negative_byte(unsigned long mask, volatile unsigned long *p)
{
	long old;

	old = raw_atomic_long_fetch_xor_release(mask, (atomic_long_t *)p);
	return !!(old & ((((1UL))) << (7)));
}

# 1 "./include/asm-generic/bitops/instrumented-lock.h" 1
# 23 "./include/asm-generic/bitops/instrumented-lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
clear_bit_unlock(long nr, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_atomic_write(addr + ((nr) / 64), sizeof(long));
	arch_clear_bit_unlock(nr, addr);
}
# 39 "./include/asm-generic/bitops/instrumented-lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__clear_bit_unlock(long nr, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_write(addr + ((nr) / 64), sizeof(long));
	arch___clear_bit_unlock(nr, addr);
}
# 55 "./include/asm-generic/bitops/instrumented-lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
test_and_set_bit_lock(long nr, volatile unsigned long *addr)
{
	instrument_atomic_read_write(addr + ((nr) / 64), sizeof(long));
	return arch_test_and_set_bit_lock(nr, addr);
}
# 75 "./include/asm-generic/bitops/instrumented-lock.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
xor_unlock_is_negative_byte(unsigned long mask, volatile unsigned long *addr)
{
	do {
	} while (0);
	instrument_atomic_write(addr, sizeof(long));
	return arch_xor_unlock_is_negative_byte(mask, addr);
}
# 81 "./include/asm-generic/bitops/lock.h" 2
# 27 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/non-atomic.h" 1
# 18 "./include/asm-generic/bitops/non-atomic.h"
# 1 "./include/asm-generic/bitops/non-instrumented-non-atomic.h" 1
# 19 "./include/asm-generic/bitops/non-atomic.h" 2
# 28 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/le.h" 1

# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 6 "./include/asm-generic/bitops/le.h" 2
# 19 "./include/asm-generic/bitops/le.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_bit_le(int nr, const void *addr)
{
	return ((__builtin_constant_p(nr ^ 0) &&
		 __builtin_constant_p((uintptr_t)(addr) !=
				      (uintptr_t)((void *)0)) &&
		 (uintptr_t)(addr) != (uintptr_t)((void *)0) &&
		 __builtin_constant_p(*(const unsigned long *)(addr))) ?
			const_test_bit(nr ^ 0, addr) :
			generic_test_bit(nr ^ 0, addr));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
set_bit_le(int nr, void *addr)
{
	set_bit(nr ^ 0, addr);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
clear_bit_le(int nr, void *addr)
{
	clear_bit(nr ^ 0, addr);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__set_bit_le(int nr, void *addr)
{
	((__builtin_constant_p(nr ^ 0) &&
	  __builtin_constant_p((uintptr_t)(addr) != (uintptr_t)((void *)0)) &&
	  (uintptr_t)(addr) != (uintptr_t)((void *)0) &&
	  __builtin_constant_p(*(const unsigned long *)(addr))) ?
		 generic___set_bit(nr ^ 0, addr) :
		 generic___set_bit(nr ^ 0, addr));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__clear_bit_le(int nr, void *addr)
{
	((__builtin_constant_p(nr ^ 0) &&
	  __builtin_constant_p((uintptr_t)(addr) != (uintptr_t)((void *)0)) &&
	  (uintptr_t)(addr) != (uintptr_t)((void *)0) &&
	  __builtin_constant_p(*(const unsigned long *)(addr))) ?
		 generic___clear_bit(nr ^ 0, addr) :
		 generic___clear_bit(nr ^ 0, addr));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_and_set_bit_le(int nr, void *addr)
{
	return test_and_set_bit(nr ^ 0, addr);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_and_clear_bit_le(int nr, void *addr)
{
	return test_and_clear_bit(nr ^ 0, addr);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
__test_and_set_bit_le(int nr, void *addr)
{
	return ((__builtin_constant_p(nr ^ 0) &&
		 __builtin_constant_p((uintptr_t)(addr) !=
				      (uintptr_t)((void *)0)) &&
		 (uintptr_t)(addr) != (uintptr_t)((void *)0) &&
		 __builtin_constant_p(*(const unsigned long *)(addr))) ?
			generic___test_and_set_bit(nr ^ 0, addr) :
			generic___test_and_set_bit(nr ^ 0, addr));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
__test_and_clear_bit_le(int nr, void *addr)
{
	return ((__builtin_constant_p(nr ^ 0) &&
		 __builtin_constant_p((uintptr_t)(addr) !=
				      (uintptr_t)((void *)0)) &&
		 (uintptr_t)(addr) != (uintptr_t)((void *)0) &&
		 __builtin_constant_p(*(const unsigned long *)(addr))) ?
			generic___test_and_clear_bit(nr ^ 0, addr) :
			generic___test_and_clear_bit(nr ^ 0, addr));
}
# 29 "./arch/arm64/include/asm/bitops.h" 2
# 1 "./include/asm-generic/bitops/ext2-atomic-setbit.h" 1
# 30 "./arch/arm64/include/asm/bitops.h" 2
# 68 "./include/linux/bitops.h" 2

_Static_assert(
	__builtin_types_compatible_p(typeof(generic___set_bit),
				     typeof(generic___set_bit)) &&
		__builtin_types_compatible_p(typeof(generic___set_bit),
					     typeof(generic___set_bit)) &&
		__builtin_types_compatible_p(typeof(generic___set_bit),
					     typeof(generic___set_bit)),
	"__same_type(arch___set_bit, generic___set_bit) && __same_type(const___set_bit, generic___set_bit) && __same_type(___set_bit, generic___set_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic___clear_bit),
				     typeof(generic___clear_bit)) &&
		__builtin_types_compatible_p(typeof(generic___clear_bit),
					     typeof(generic___clear_bit)) &&
		__builtin_types_compatible_p(typeof(generic___clear_bit),
					     typeof(generic___clear_bit)),
	"__same_type(arch___clear_bit, generic___clear_bit) && __same_type(const___clear_bit, generic___clear_bit) && __same_type(___clear_bit, generic___clear_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic___change_bit),
				     typeof(generic___change_bit)) &&
		__builtin_types_compatible_p(typeof(generic___change_bit),
					     typeof(generic___change_bit)) &&
		__builtin_types_compatible_p(typeof(generic___change_bit),
					     typeof(generic___change_bit)),
	"__same_type(arch___change_bit, generic___change_bit) && __same_type(const___change_bit, generic___change_bit) && __same_type(___change_bit, generic___change_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic___test_and_set_bit),
				     typeof(generic___test_and_set_bit)) &&
		__builtin_types_compatible_p(
			typeof(generic___test_and_set_bit),
			typeof(generic___test_and_set_bit)) &&
		__builtin_types_compatible_p(typeof(generic___test_and_set_bit),
					     typeof(generic___test_and_set_bit)),
	"__same_type(arch___test_and_set_bit, generic___test_and_set_bit) && __same_type(const___test_and_set_bit, generic___test_and_set_bit) && __same_type(___test_and_set_bit, generic___test_and_set_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic___test_and_clear_bit),
				     typeof(generic___test_and_clear_bit)) &&
		__builtin_types_compatible_p(
			typeof(generic___test_and_clear_bit),
			typeof(generic___test_and_clear_bit)) &&
		__builtin_types_compatible_p(
			typeof(generic___test_and_clear_bit),
			typeof(generic___test_and_clear_bit)),
	"__same_type(arch___test_and_clear_bit, generic___test_and_clear_bit) && __same_type(const___test_and_clear_bit, generic___test_and_clear_bit) && __same_type(___test_and_clear_bit, generic___test_and_clear_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic___test_and_change_bit),
				     typeof(generic___test_and_change_bit)) &&
		__builtin_types_compatible_p(
			typeof(generic___test_and_change_bit),
			typeof(generic___test_and_change_bit)) &&
		__builtin_types_compatible_p(
			typeof(generic___test_and_change_bit),
			typeof(generic___test_and_change_bit)),
	"__same_type(arch___test_and_change_bit, generic___test_and_change_bit) && __same_type(const___test_and_change_bit, generic___test_and_change_bit) && __same_type(___test_and_change_bit, generic___test_and_change_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic_test_bit),
				     typeof(generic_test_bit)) &&
		__builtin_types_compatible_p(typeof(const_test_bit),
					     typeof(generic_test_bit)) &&
		__builtin_types_compatible_p(typeof(generic_test_bit),
					     typeof(generic_test_bit)),
	"__same_type(arch_test_bit, generic_test_bit) && __same_type(const_test_bit, generic_test_bit) && __same_type(_test_bit, generic_test_bit)");
_Static_assert(
	__builtin_types_compatible_p(typeof(generic_test_bit_acquire),
				     typeof(generic_test_bit_acquire)) &&
		__builtin_types_compatible_p(typeof(generic_test_bit_acquire),
					     typeof(generic_test_bit_acquire)) &&
		__builtin_types_compatible_p(typeof(generic_test_bit_acquire),
					     typeof(generic_test_bit_acquire)),
	"__same_type(arch_test_bit_acquire, generic_test_bit_acquire) && __same_type(const_test_bit_acquire, generic_test_bit_acquire) && __same_type(_test_bit_acquire, generic_test_bit_acquire)");

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
get_bitmask_order(unsigned int count)
{
	int order;

	order = fls(count);
	return order;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
hweight_long(unsigned long w)
{
	return sizeof(w) == 4 ?
		       (__builtin_constant_p(w) ?
				((((unsigned int)((!!((w) & (1ULL << 0))) +
						  (!!((w) & (1ULL << 1))) +
						  (!!((w) & (1ULL << 2))) +
						  (!!((w) & (1ULL << 3))) +
						  (!!((w) & (1ULL << 4))) +
						  (!!((w) & (1ULL << 5))) +
						  (!!((w) & (1ULL << 6))) +
						  (!!((w) & (1ULL << 7))))) +
				  ((unsigned int)((!!(((w) >> 8) &
						      (1ULL << 0))) +
						  (!!(((w) >> 8) &
						      (1ULL << 1))) +
						  (!!(((w) >> 8) &
						      (1ULL << 2))) +
						  (!!(((w) >> 8) &
						      (1ULL << 3))) +
						  (!!(((w) >> 8) &
						      (1ULL << 4))) +
						  (!!(((w) >> 8) &
						      (1ULL << 5))) +
						  (!!(((w) >> 8) &
						      (1ULL << 6))) +
						  (!!(((w) >> 8) &
						      (1ULL << 7)))))) +
				 (((unsigned int)((!!(((w) >> 16) &
						      (1ULL << 0))) +
						  (!!(((w) >> 16) &
						      (1ULL << 1))) +
						  (!!(((w) >> 16) &
						      (1ULL << 2))) +
						  (!!(((w) >> 16) &
						      (1ULL << 3))) +
						  (!!(((w) >> 16) &
						      (1ULL << 4))) +
						  (!!(((w) >> 16) &
						      (1ULL << 5))) +
						  (!!(((w) >> 16) &
						      (1ULL << 6))) +
						  (!!(((w) >> 16) &
						      (1ULL << 7))))) +
				  ((unsigned int)((!!((((w) >> 16) >> 8) &
						      (1ULL << 0))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 1))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 2))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 3))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 4))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 5))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 6))) +
						  (!!((((w) >> 16) >> 8) &
						      (1ULL << 7))))))) :
				__arch_hweight32(w)) :
		       (__builtin_constant_p((__u64)w) ?
				(((((unsigned int)((!!(((__u64)w) &
						       (1ULL << 0))) +
						   (!!(((__u64)w) &
						       (1ULL << 1))) +
						   (!!(((__u64)w) &
						       (1ULL << 2))) +
						   (!!(((__u64)w) &
						       (1ULL << 3))) +
						   (!!(((__u64)w) &
						       (1ULL << 4))) +
						   (!!(((__u64)w) &
						       (1ULL << 5))) +
						   (!!(((__u64)w) &
						       (1ULL << 6))) +
						   (!!(((__u64)w) &
						       (1ULL << 7))))) +
				   ((unsigned int)((!!((((__u64)w) >> 8) &
						       (1ULL << 0))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 1))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 2))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 3))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 4))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 5))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 6))) +
						   (!!((((__u64)w) >> 8) &
						       (1ULL << 7)))))) +
				  (((unsigned int)((!!((((__u64)w) >> 16) &
						       (1ULL << 0))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 1))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 2))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 3))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 4))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 5))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 6))) +
						   (!!((((__u64)w) >> 16) &
						       (1ULL << 7))))) +
				   ((unsigned int)((!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 0))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 1))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 2))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 3))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 4))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 5))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 6))) +
						   (!!(((((__u64)w) >> 16) >> 8) &
						       (1ULL << 7))))))) +
				 ((((unsigned int)((!!((((__u64)w) >> 32) &
						       (1ULL << 0))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 1))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 2))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 3))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 4))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 5))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 6))) +
						   (!!((((__u64)w) >> 32) &
						       (1ULL << 7))))) +
				   ((unsigned int)((!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 0))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 1))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 2))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 3))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 4))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 5))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 6))) +
						   (!!(((((__u64)w) >> 32) >> 8) &
						       (1ULL << 7)))))) +
				  (((unsigned int)((!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 0))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 1))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 2))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 3))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 4))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 5))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 6))) +
						   (!!(((((__u64)w) >> 32) >>
							16) &
						       (1ULL << 7))))) +
				   ((unsigned int)((!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 0))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 1))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 2))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 3))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 4))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 5))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 6))) +
						   (!!((((((__u64)w) >> 32) >>
							 16) >>
							8) &
						       (1ULL << 7)))))))) :
				__arch_hweight64((__u64)w));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u64
rol64(__u64 word, unsigned int shift)
{
	return (word << (shift & 63)) | (word >> ((-shift) & 63));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u64
ror64(__u64 word, unsigned int shift)
{
	return (word >> (shift & 63)) | (word << ((-shift) & 63));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u32
rol32(__u32 word, unsigned int shift)
{
	return (word << (shift & 31)) | (word >> ((-shift) & 31));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u32
ror32(__u32 word, unsigned int shift)
{
	return (word >> (shift & 31)) | (word << ((-shift) & 31));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u16
rol16(__u16 word, unsigned int shift)
{
	return (word << (shift & 15)) | (word >> ((-shift) & 15));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u16
ror16(__u16 word, unsigned int shift)
{
	return (word >> (shift & 15)) | (word << ((-shift) & 15));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u8
rol8(__u8 word, unsigned int shift)
{
	return (word << (shift & 7)) | (word >> ((-shift) & 7));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) __u8
ror8(__u8 word, unsigned int shift)
{
	return (word >> (shift & 7)) | (word << ((-shift) & 7));
}
# 188 "./include/linux/bitops.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __s32 sign_extend32(__u32 value, int index)
{
	__u8 shift = 31 - index;
	return (__s32)(value << shift) >> shift;
}
# 203 "./include/linux/bitops.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __s64 sign_extend64(__u64 value, int index)
{
	__u8 shift = 63 - index;
	return (__s64)(value << shift) >> shift;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned int
fls_long(unsigned long l)
{
	if (sizeof(l) == 4)
		return fls(l);
	return fls64(l);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
get_count_order(unsigned int count)
{
	if (count == 0)
		return -1;

	return fls(--count);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
get_count_order_long(unsigned long l)
{
	if (l == 0UL)
		return -1;
	return (int)fls_long(--l);
}
# 258 "./include/linux/bitops.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int parity8(u8 val)
{
	val ^= val >> 4;
	return (0x6996 >> (val & 0xf)) & 1;
}
# 276 "./include/linux/bitops.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__const__)) unsigned int __ffs64(u64 word)
{
	return __ffs((unsigned long)word);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned int
fns(unsigned long word, unsigned int n)
{
	while (word && n--)
		word &= word - 1;

	return word ? __ffs(word) : 64;
}
# 28 "./include/linux/thread_info.h" 2

enum {
	BAD_STACK = -1,
	NOT_STACK = 0,
	GOOD_FRAME,
	GOOD_STACK,
};
# 62 "./include/linux/thread_info.h"
# 1 "./arch/arm64/include/asm/thread_info.h" 1
# 15 "./arch/arm64/include/asm/thread_info.h"
struct task_struct;

# 1 "./arch/arm64/include/asm/memory.h" 1
# 14 "./arch/arm64/include/asm/memory.h"
# 1 "./include/linux/sizes.h" 1
# 15 "./arch/arm64/include/asm/memory.h" 2
# 1 "./arch/arm64/include/asm/page-def.h" 1
# 13 "./arch/arm64/include/asm/page-def.h"
# 1 "./include/vdso/page.h" 1
# 14 "./arch/arm64/include/asm/page-def.h" 2
# 16 "./arch/arm64/include/asm/memory.h" 2
# 219 "./arch/arm64/include/asm/memory.h"
# 1 "./include/linux/mmdebug.h" 1

struct page;
struct vm_area_struct;
struct mm_struct;
struct vma_iterator;
struct vma_merge_struct;

void dump_page(const struct page *page, const char *reason);
void dump_vma(const struct vm_area_struct *vma);
void dump_mm(const struct mm_struct *mm);
void dump_vmg(const struct vma_merge_struct *vmg, const char *reason);
void vma_iter_dump_tree(const struct vma_iterator *vmi);
# 220 "./arch/arm64/include/asm/memory.h" 2

# 1 "./arch/arm64/include/asm/boot.h" 1
# 222 "./arch/arm64/include/asm/memory.h" 2

# 1 "./arch/arm64/include/asm/sections.h" 1

# 1 "./include/asm-generic/sections.h" 1
# 35 "./include/asm-generic/sections.h"
extern char _text[], _stext[], _etext[];
extern char _data[], _sdata[], _edata[];
extern char __bss_start[], __bss_stop[];
extern char __init_begin[], __init_end[];
extern char _sinittext[], _einittext[];
extern char __start_ro_after_init[], __end_ro_after_init[];
extern char _end[];
extern char __per_cpu_start[], __per_cpu_end[];
extern char __kprobes_text_start[], __kprobes_text_end[];
extern char __entry_text_start[], __entry_text_end[];
extern char __start_rodata[], __end_rodata[];
extern char __irqentry_text_start[], __irqentry_text_end[];
extern char __softirqentry_text_start[], __softirqentry_text_end[];
extern char __start_once[], __end_once[];

extern char __ctors_start[], __ctors_end[];

extern char __start_opd[], __end_opd[];

extern char __noinstr_text_start[], __noinstr_text_end[];

extern const void __nosave_begin, __nosave_end;
# 70 "./include/asm-generic/sections.h"
typedef struct {
	unsigned long addr;
} func_desc_t;

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
have_function_descriptors(void)
{
	return 0;
}
# 91 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
memory_contains(void *begin, void *end, void *virt, size_t size)
{
	return virt >= begin && virt + size <= end;
}
# 108 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
memory_intersects(void *begin, void *end, void *virt, size_t size)
{
	void *vend = virt + size;

	if (virt < end && vend > begin)
		return true;

	return false;
}
# 128 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
init_section_contains(void *virt, size_t size)
{
	return memory_contains(__init_begin, __init_end, virt, size);
}
# 142 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
init_section_intersects(void *virt, size_t size)
{
	return memory_intersects(__init_begin, __init_end, virt, size);
}
# 157 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
is_kernel_core_data(unsigned long addr)
{
	if (addr >= (unsigned long)_sdata && addr < (unsigned long)_edata)
		return true;

	if (addr >= (unsigned long)__bss_start &&
	    addr < (unsigned long)__bss_stop)
		return true;

	return false;
}
# 177 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
is_kernel_rodata(unsigned long addr)
{
	return addr >= (unsigned long)__start_rodata &&
	       addr < (unsigned long)__end_rodata;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
is_kernel_ro_after_init(unsigned long addr)
{
	return addr >= (unsigned long)__start_ro_after_init &&
	       addr < (unsigned long)__end_ro_after_init;
}
# 196 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
is_kernel_inittext(unsigned long addr)
{
	return addr >= (unsigned long)_sinittext &&
	       addr < (unsigned long)_einittext;
}
# 211 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
__is_kernel_text(unsigned long addr)
{
	return addr >= (unsigned long)_stext && addr < (unsigned long)_etext;
}
# 227 "./include/asm-generic/sections.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
__is_kernel(unsigned long addr)
{
	return ((addr >= (unsigned long)_stext && addr < (unsigned long)_end) ||
		(addr >= (unsigned long)__init_begin &&
		 addr < (unsigned long)__init_end));
}
# 9 "./arch/arm64/include/asm/sections.h" 2

extern char __alt_instructions[], __alt_instructions_end[];
extern char __hibernate_exit_text_start[], __hibernate_exit_text_end[];
extern char __hyp_idmap_text_start[], __hyp_idmap_text_end[];
extern char __hyp_text_start[], __hyp_text_end[];
extern char __hyp_data_start[], __hyp_data_end[];
extern char __hyp_rodata_start[], __hyp_rodata_end[];
extern char __hyp_reloc_begin[], __hyp_reloc_end[];
extern char __hyp_bss_start[], __hyp_bss_end[];
extern char __idmap_text_start[], __idmap_text_end[];
extern char __initdata_begin[], __initdata_end[];
extern char __inittext_begin[], __inittext_end[];
extern char __exittext_begin[], __exittext_end[];
extern char __irqentry_text_start[], __irqentry_text_end[];
extern char __mmuoff_data_start[], __mmuoff_data_end[];
extern char __entry_tramp_text_start[], __entry_tramp_text_end[];
extern char __relocate_new_kernel_start[], __relocate_new_kernel_end[];

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) size_t
entry_tramp_text_size(void)
{
	return __entry_tramp_text_end - __entry_tramp_text_start;
}
# 224 "./arch/arm64/include/asm/memory.h" 2
# 1 "./arch/arm64/include/asm/sysreg.h" 1
# 14 "./arch/arm64/include/asm/sysreg.h"
# 1 "./include/linux/kasan-tags.h" 1
# 15 "./arch/arm64/include/asm/sysreg.h" 2

# 1 "./arch/arm64/include/asm/gpr-num.h" 1
# 18 "./arch/arm64/include/asm/sysreg.h" 2
# 176 "./arch/arm64/include/asm/sysreg.h"
# 1 "./arch/arm64/include/generated/asm/sysreg-defs.h" 1
# 177 "./arch/arm64/include/asm/sysreg.h" 2
# 1130 "./arch/arm64/include/asm/sysreg.h"
# 1 "./include/linux/bitfield.h" 1
# 198 "./include/linux/bitfield.h"
extern void __attribute__((__error__("value doesn't fit into mask")))
__field_overflow(void);
extern void __attribute__((__error__("bad bitfield mask"))) __bad_mask(void);
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
field_multiplier(u64 field)
{
	if ((field | (field - 1)) & ((field | (field - 1)) + 1))
		__bad_mask();
	return field & -field;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64
field_mask(u64 field)
{
	return field / field_multiplier(field);
}
# 238 "./include/linux/bitfield.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u8
	__attribute__((__warn_unused_result__)) u8_encode_bits(u8 v, u8 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((v & field_mask(field)) * field_multiplier(field));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u8 __attribute__((__warn_unused_result__))
u8_replace_bits(__u8 old, u8 val, u8 field)
{
	return (old & ~(field)) | u8_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
u8p_replace_bits(__u8 *p, u8 val, u8 field)
{
	*p = (*p & ~(field)) | u8_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u8 __attribute__((__warn_unused_result__))
u8_get_bits(__u8 v, u8 field)
{
	return ((v)&field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le16
	__attribute__((__warn_unused_result__))
	le16_encode_bits(u16 v, u16 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((__le16)(__u16)((v & field_mask(field)) *
				field_multiplier(field)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le16
	__attribute__((__warn_unused_result__))
	le16_replace_bits(__le16 old, u16 val, u16 field)
{
	return (old & ~((__le16)(__u16)(field))) | le16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
le16p_replace_bits(__le16 *p, u16 val, u16 field)
{
	*p = (*p & ~((__le16)(__u16)(field))) | le16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16 __attribute__((__warn_unused_result__))
le16_get_bits(__le16 v, u16 field)
{
	return (((__u16)(__le16)(v)) & field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be16
	__attribute__((__warn_unused_result__))
	be16_encode_bits(u16 v, u16 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((
		__be16)(__u16)(__builtin_constant_p(((v & field_mask(field)) *
						     field_multiplier(field))) ?
				       ((__u16)((((__u16)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u16)0x00ffU)
						 << 8) |
						(((__u16)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u16)0xff00U) >>
						 8))) :
				       __fswab16(((v & field_mask(field)) *
						  field_multiplier(field)))));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be16
	__attribute__((__warn_unused_result__))
	be16_replace_bits(__be16 old, u16 val, u16 field)
{
	return (old & ~((__be16)(__u16)(__builtin_constant_p((field)) ?
						((__u16)((((__u16)((field)) &
							   (__u16)0x00ffU)
							  << 8) |
							 (((__u16)((field)) &
							   (__u16)0xff00U) >>
							  8))) :
						__fswab16((field))))) |
	       be16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
be16p_replace_bits(__be16 *p, u16 val, u16 field)
{
	*p = (*p & ~((__be16)(__u16)(__builtin_constant_p((field)) ?
					     ((__u16)((((__u16)((field)) &
							(__u16)0x00ffU)
						       << 8) |
						      (((__u16)((field)) &
							(__u16)0xff00U) >>
						       8))) :
					     __fswab16((field))))) |
	     be16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16 __attribute__((__warn_unused_result__))
be16_get_bits(__be16 v, u16 field)
{
	return ((__u16)(__builtin_constant_p((__u16)(__be16)(v)) ?
				((__u16)((((__u16)((__u16)(__be16)(v)) &
					   (__u16)0x00ffU)
					  << 8) |
					 (((__u16)((__u16)(__be16)(v)) &
					   (__u16)0xff00U) >>
					  8))) :
				__fswab16((__u16)(__be16)(v))) &
		field) /
	       field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u16 __attribute__((__warn_unused_result__))
u16_encode_bits(u16 v, u16 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((v & field_mask(field)) * field_multiplier(field));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u16 __attribute__((__warn_unused_result__))
u16_replace_bits(__u16 old, u16 val, u16 field)
{
	return (old & ~(field)) | u16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
u16p_replace_bits(__u16 *p, u16 val, u16 field)
{
	*p = (*p & ~(field)) | u16_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u16 __attribute__((__warn_unused_result__))
u16_get_bits(__u16 v, u16 field)
{
	return ((v)&field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le32
	__attribute__((__warn_unused_result__))
	le32_encode_bits(u32 v, u32 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((__le32)(__u32)((v & field_mask(field)) *
				field_multiplier(field)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le32
	__attribute__((__warn_unused_result__))
	le32_replace_bits(__le32 old, u32 val, u32 field)
{
	return (old & ~((__le32)(__u32)(field))) | le32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
le32p_replace_bits(__le32 *p, u32 val, u32 field)
{
	*p = (*p & ~((__le32)(__u32)(field))) | le32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32 __attribute__((__warn_unused_result__))
le32_get_bits(__le32 v, u32 field)
{
	return (((__u32)(__le32)(v)) & field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be32
	__attribute__((__warn_unused_result__))
	be32_encode_bits(u32 v, u32 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((
		__be32)(__u32)(__builtin_constant_p(((v & field_mask(field)) *
						     field_multiplier(field))) ?
				       ((__u32)((((__u32)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u32)0x000000ffUL)
						 << 24) |
						(((__u32)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u32)0x0000ff00UL)
						 << 8) |
						(((__u32)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u32)0x00ff0000UL) >>
						 8) |
						(((__u32)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u32)0xff000000UL) >>
						 24))) :
				       __fswab32(((v & field_mask(field)) *
						  field_multiplier(field)))));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be32
	__attribute__((__warn_unused_result__))
	be32_replace_bits(__be32 old, u32 val, u32 field)
{
	return (old &
		~((__be32)(__u32)(__builtin_constant_p((field)) ?
					  ((__u32)((((__u32)((field)) &
						     (__u32)0x000000ffUL)
						    << 24) |
						   (((__u32)((field)) &
						     (__u32)0x0000ff00UL)
						    << 8) |
						   (((__u32)((field)) &
						     (__u32)0x00ff0000UL) >>
						    8) |
						   (((__u32)((field)) &
						     (__u32)0xff000000UL) >>
						    24))) :
					  __fswab32((field))))) |
	       be32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
be32p_replace_bits(__be32 *p, u32 val, u32 field)
{
	*p = (*p & ~((__be32)(__u32)(__builtin_constant_p((field)) ?
					     ((__u32)((((__u32)((field)) &
							(__u32)0x000000ffUL)
						       << 24) |
						      (((__u32)((field)) &
							(__u32)0x0000ff00UL)
						       << 8) |
						      (((__u32)((field)) &
							(__u32)0x00ff0000UL) >>
						       8) |
						      (((__u32)((field)) &
							(__u32)0xff000000UL) >>
						       24))) :
					     __fswab32((field))))) |
	     be32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32 __attribute__((__warn_unused_result__))
be32_get_bits(__be32 v, u32 field)
{
	return ((__u32)(__builtin_constant_p((__u32)(__be32)(v)) ?
				((__u32)((((__u32)((__u32)(__be32)(v)) &
					   (__u32)0x000000ffUL)
					  << 24) |
					 (((__u32)((__u32)(__be32)(v)) &
					   (__u32)0x0000ff00UL)
					  << 8) |
					 (((__u32)((__u32)(__be32)(v)) &
					   (__u32)0x00ff0000UL) >>
					  8) |
					 (((__u32)((__u32)(__be32)(v)) &
					   (__u32)0xff000000UL) >>
					  24))) :
				__fswab32((__u32)(__be32)(v))) &
		field) /
	       field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u32 __attribute__((__warn_unused_result__))
u32_encode_bits(u32 v, u32 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((v & field_mask(field)) * field_multiplier(field));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u32 __attribute__((__warn_unused_result__))
u32_replace_bits(__u32 old, u32 val, u32 field)
{
	return (old & ~(field)) | u32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
u32p_replace_bits(__u32 *p, u32 val, u32 field)
{
	*p = (*p & ~(field)) | u32_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u32 __attribute__((__warn_unused_result__))
u32_get_bits(__u32 v, u32 field)
{
	return ((v)&field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le64
	__attribute__((__warn_unused_result__))
	le64_encode_bits(u64 v, u64 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((__le64)(__u64)((v & field_mask(field)) *
				field_multiplier(field)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __le64
	__attribute__((__warn_unused_result__))
	le64_replace_bits(__le64 old, u64 val, u64 field)
{
	return (old & ~((__le64)(__u64)(field))) | le64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
le64p_replace_bits(__le64 *p, u64 val, u64 field)
{
	*p = (*p & ~((__le64)(__u64)(field))) | le64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64 __attribute__((__warn_unused_result__))
le64_get_bits(__le64 v, u64 field)
{
	return (((__u64)(__le64)(v)) & field) / field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be64
	__attribute__((__warn_unused_result__))
	be64_encode_bits(u64 v, u64 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((
		__be64)(__u64)(__builtin_constant_p(((v & field_mask(field)) *
						     field_multiplier(field))) ?
				       ((__u64)((((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x00000000000000ffULL)
						 << 56) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x000000000000ff00ULL)
						 << 40) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x0000000000ff0000ULL)
						 << 24) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x00000000ff000000ULL)
						 << 8) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x000000ff00000000ULL) >>
						 8) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x0000ff0000000000ULL) >>
						 24) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0x00ff000000000000ULL) >>
						 40) |
						(((__u64)(((v &
							    field_mask(field)) *
							   field_multiplier(
								   field))) &
						  (__u64)0xff00000000000000ULL) >>
						 56))) :
				       __fswab64(((v & field_mask(field)) *
						  field_multiplier(field)))));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __be64
	__attribute__((__warn_unused_result__))
	be64_replace_bits(__be64 old, u64 val, u64 field)
{
	return (old &
		~((__be64)(__u64)(__builtin_constant_p((field)) ?
					  ((__u64)((((__u64)((field)) &
						     (__u64)0x00000000000000ffULL)
						    << 56) |
						   (((__u64)((field)) &
						     (__u64)0x000000000000ff00ULL)
						    << 40) |
						   (((__u64)((field)) &
						     (__u64)0x0000000000ff0000ULL)
						    << 24) |
						   (((__u64)((field)) &
						     (__u64)0x00000000ff000000ULL)
						    << 8) |
						   (((__u64)((field)) &
						     (__u64)0x000000ff00000000ULL) >>
						    8) |
						   (((__u64)((field)) &
						     (__u64)0x0000ff0000000000ULL) >>
						    24) |
						   (((__u64)((field)) &
						     (__u64)0x00ff000000000000ULL) >>
						    40) |
						   (((__u64)((field)) &
						     (__u64)0xff00000000000000ULL) >>
						    56))) :
					  __fswab64((field))))) |
	       be64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
be64p_replace_bits(__be64 *p, u64 val, u64 field)
{
	*p = (*p &
	      ~((__be64)(__u64)(__builtin_constant_p((field)) ?
					((__u64)((((__u64)((field)) &
						   (__u64)0x00000000000000ffULL)
						  << 56) |
						 (((__u64)((field)) &
						   (__u64)0x000000000000ff00ULL)
						  << 40) |
						 (((__u64)((field)) &
						   (__u64)0x0000000000ff0000ULL)
						  << 24) |
						 (((__u64)((field)) &
						   (__u64)0x00000000ff000000ULL)
						  << 8) |
						 (((__u64)((field)) &
						   (__u64)0x000000ff00000000ULL) >>
						  8) |
						 (((__u64)((field)) &
						   (__u64)0x0000ff0000000000ULL) >>
						  24) |
						 (((__u64)((field)) &
						   (__u64)0x00ff000000000000ULL) >>
						  40) |
						 (((__u64)((field)) &
						   (__u64)0xff00000000000000ULL) >>
						  56))) :
					__fswab64((field))))) |
	     be64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64 __attribute__((__warn_unused_result__))
be64_get_bits(__be64 v, u64 field)
{
	return ((__u64)(__builtin_constant_p((__u64)(__be64)(v)) ?
				((__u64)((((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x00000000000000ffULL)
					  << 56) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x000000000000ff00ULL)
					  << 40) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x0000000000ff0000ULL)
					  << 24) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x00000000ff000000ULL)
					  << 8) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x000000ff00000000ULL) >>
					  8) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x0000ff0000000000ULL) >>
					  24) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0x00ff000000000000ULL) >>
					  40) |
					 (((__u64)((__u64)(__be64)(v)) &
					   (__u64)0xff00000000000000ULL) >>
					  56))) :
				__fswab64((__u64)(__be64)(v))) &
		field) /
	       field_multiplier(field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u64 __attribute__((__warn_unused_result__))
u64_encode_bits(u64 v, u64 field)
{
	if (__builtin_constant_p(v) && (v & ~field_mask(field)))
		__field_overflow();
	return ((v & field_mask(field)) * field_multiplier(field));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) __u64 __attribute__((__warn_unused_result__))
u64_replace_bits(__u64 old, u64 val, u64 field)
{
	return (old & ~(field)) | u64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
u64p_replace_bits(__u64 *p, u64 val, u64 field)
{
	*p = (*p & ~(field)) | u64_encode_bits(val, field);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) u64 __attribute__((__warn_unused_result__))
u64_get_bits(__u64 v, u64 field)
{
	return ((v)&field) / field_multiplier(field);
}
# 1131 "./arch/arm64/include/asm/sysreg.h" 2
# 225 "./arch/arm64/include/asm/memory.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
	__attribute__((__pure__)) read_tcr(void)
{
	u64 tcr;

	asm("mrs %0, tcr_el1" : "=r"(tcr));
	return tcr;
}
# 242 "./arch/arm64/include/asm/memory.h"
extern s64 memstart_addr;

extern u64 kimage_voffset;

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
kaslr_offset(void)
{
	return (u64)&_text -
	       ((((-((((1UL))) << ((((48))) - 1)))) + (0x80000000)));
}

void kaslr_init(void);
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
kaslr_enabled(void)
{
	extern bool __kaslr_is_enabled;
	return __kaslr_is_enabled;
}
# 306 "./arch/arm64/include/asm/memory.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
const void *__tag_set(const void *addr, u8 tag)
{
	u64 __addr = (u64)addr & ~0UL;
	return (const void *)(__addr | 0UL);
}
# 367 "./arch/arm64/include/asm/memory.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
phys_addr_t virt_to_phys(const volatile void *x)
{
	return ({
		phys_addr_t __x = (phys_addr_t)(((unsigned long)(x)));
		(((u64)(__x) - ((-((((1UL))) << ((48)))))) <
		 (((-((((1UL))) << ((((48))) - 1)))) -
		  ((-((((1UL))) << ((48))))))) ?
			(((__x) - ((-((((1UL))) << ((48)))))) + ({
				 ((void)(sizeof((long)(memstart_addr & 1))));
				 memstart_addr;
			 })) :
			((__x)-kimage_voffset);
	});
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void *
phys_to_virt(phys_addr_t x)
{
	return (void *)((
		(unsigned long)((x) - ({
					((void)(sizeof(
						(long)(memstart_addr & 1))));
					memstart_addr;
				})) |
		((-((((1UL))) << ((48)))))));
}

# 1 "./include/asm-generic/memory_model.h" 1

# 1 "./include/linux/pfn.h" 1
# 6 "./include/asm-generic/memory_model.h" 2
# 380 "./arch/arm64/include/asm/memory.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
virt_to_pfn(const void *kaddr)
{
	return ((unsigned long)((virt_to_phys(kaddr)) >> 12));
}
# 428 "./arch/arm64/include/asm/memory.h"
void dump_mem_limit(void);
# 18 "./arch/arm64/include/asm/thread_info.h" 2
# 1 "./arch/arm64/include/asm/stack_pointer.h" 1

register unsigned long current_stack_pointer asm("sp");
# 19 "./arch/arm64/include/asm/thread_info.h" 2
# 1 "./arch/arm64/include/generated/uapi/asm/types.h" 1
# 20 "./arch/arm64/include/asm/thread_info.h" 2

struct thread_info {
	unsigned long flags;

	u64 ttbr0;

	union {
		u64 preempt_count;
		struct {
			u32 count;
			u32 need_resched;

		} preempt;
	};

	void *scs_base;
	void *scs_sp;

	u64 mpam_partid_pmg;

	u32 cpu;
};
# 58 "./arch/arm64/include/asm/thread_info.h"
void arch_setup_new_exec(void);
# 63 "./include/linux/thread_info.h" 2
# 83 "./include/linux/thread_info.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) long
set_restart_fn(struct restart_block *restart,
	       long (*fn)(struct restart_block *))
{
	restart->fn = fn;
	do {
	} while (0);
	return -516;
}
# 102 "./include/linux/thread_info.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
set_ti_thread_flag(struct thread_info *ti, int flag)
{
	set_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
clear_ti_thread_flag(struct thread_info *ti, int flag)
{
	clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
update_ti_thread_flag(struct thread_info *ti, int flag, bool value)
{
	if (value)
		set_ti_thread_flag(ti, flag);
	else
		clear_ti_thread_flag(ti, flag);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
	return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
	return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
test_ti_thread_flag(struct thread_info *ti, int flag)
{
	return ((__builtin_constant_p(flag) &&
		 __builtin_constant_p((uintptr_t)((unsigned long *)&ti->flags) !=
				      (uintptr_t)((void *)0)) &&
		 (uintptr_t)((unsigned long *)&ti->flags) !=
			 (uintptr_t)((void *)0) &&
		 __builtin_constant_p(*(
			 const unsigned long *)((unsigned long *)&ti->flags))) ?
			const_test_bit(flag, (unsigned long *)&ti->flags) :
			generic_test_bit(flag, (unsigned long *)&ti->flags));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned long
read_ti_thread_flags(struct thread_info *ti)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_127(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(ti->flags) == sizeof(char) ||
			       sizeof(ti->flags) == sizeof(short) ||
			       sizeof(ti->flags) == sizeof(int) ||
			       sizeof(ti->flags) == sizeof(long)) ||
			      sizeof(ti->flags) == sizeof(long long)))
				__compiletime_assert_127();
		} while (0);
		(*(const volatile __typeof_unqual__(ti->flags) *)&(ti->flags));
	});
}
# 205 "./include/linux/thread_info.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool tif_test_bit(int bit)
{
	return ((__builtin_constant_p(bit) &&
		 __builtin_constant_p(
			 (uintptr_t)((unsigned long *)(&((struct thread_info *)
								 get_current())
								->flags)) !=
			 (uintptr_t)((void *)0)) &&
		 (uintptr_t)((
			 unsigned long *)(&((struct thread_info *)get_current())
						   ->flags)) !=
			 (uintptr_t)((void *)0) &&
		 __builtin_constant_p(*(const unsigned long *)((
			 unsigned long *)(&((struct thread_info *)get_current())
						   ->flags)))) ?
			const_test_bit(
				bit, (unsigned long *)(&((struct thread_info *)
								 get_current())
								->flags)) :
			generic_test_bit(
				bit, (unsigned long *)(&((struct thread_info *)
								 get_current())
								->flags)));
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) bool
tif_need_resched(void)
{
	return tif_test_bit(1);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int
arch_within_stack_frames(const void *const stack, const void *const stackend,
			 const void *obj, unsigned long len)
{
	return 0;
}

void arch_task_cache_init(void);
void arch_release_task_struct(struct task_struct *tsk);
int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
# 6 "./arch/arm64/include/asm/preempt.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) int preempt_count(void)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_128(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_128();
		} while (0);
		(*(const volatile __typeof_unqual__(
			((struct thread_info *)get_current())->preempt.count)
			   *)&(((struct thread_info *)get_current())
				       ->preempt.count));
	});
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
preempt_count_set(u64 pc)
{
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_129(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_129();
		} while (0);
		do {
			*(volatile typeof(((struct thread_info *)get_current())
						  ->preempt.count)
				  *)&(((struct thread_info *)get_current())
					      ->preempt.count) = (pc);
		} while (0);
	} while (0);
}
# 29 "./arch/arm64/include/asm/preempt.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
set_preempt_need_resched(void)
{
	((struct thread_info *)get_current())->preempt.need_resched = 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
clear_preempt_need_resched(void)
{
	((struct thread_info *)get_current())->preempt.need_resched = 1;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
test_preempt_need_resched(void)
{
	return !((struct thread_info *)get_current())->preempt.need_resched;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__preempt_count_add(int val)
{
	u32 pc = ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_130(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_130();
		} while (0);
		(*(const volatile __typeof_unqual__(
			((struct thread_info *)get_current())->preempt.count)
			   *)&(((struct thread_info *)get_current())
				       ->preempt.count));
	});
	pc += val;
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_131(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_131();
		} while (0);
		do {
			*(volatile typeof(((struct thread_info *)get_current())
						  ->preempt.count)
				  *)&(((struct thread_info *)get_current())
					      ->preempt.count) = (pc);
		} while (0);
	} while (0);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__preempt_count_sub(int val)
{
	u32 pc = ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_132(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_132();
		} while (0);
		(*(const volatile __typeof_unqual__(
			((struct thread_info *)get_current())->preempt.count)
			   *)&(((struct thread_info *)get_current())
				       ->preempt.count));
	});
	pc -= val;
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_133(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt.count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt.count) ==
				      sizeof(long long)))
				__compiletime_assert_133();
		} while (0);
		do {
			*(volatile typeof(((struct thread_info *)get_current())
						  ->preempt.count)
				  *)&(((struct thread_info *)get_current())
					      ->preempt.count) = (pc);
		} while (0);
	} while (0);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
__preempt_count_dec_and_test(void)
{
	struct thread_info *ti = ((struct thread_info *)get_current());
	u64 pc = ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_134(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(ti->preempt_count) == sizeof(char) ||
			       sizeof(ti->preempt_count) == sizeof(short) ||
			       sizeof(ti->preempt_count) == sizeof(int) ||
			       sizeof(ti->preempt_count) == sizeof(long)) ||
			      sizeof(ti->preempt_count) == sizeof(long long)))
				__compiletime_assert_134();
		} while (0);
		(*(const volatile __typeof_unqual__(ti->preempt_count) *)&(
			ti->preempt_count));
	});

	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_135(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(ti->preempt.count) == sizeof(char) ||
			       sizeof(ti->preempt.count) == sizeof(short) ||
			       sizeof(ti->preempt.count) == sizeof(int) ||
			       sizeof(ti->preempt.count) == sizeof(long)) ||
			      sizeof(ti->preempt.count) == sizeof(long long)))
				__compiletime_assert_135();
		} while (0);
		do {
			*(volatile typeof(ti->preempt.count) *)&(
				ti->preempt.count) = (--pc);
		} while (0);
	} while (0);
# 73 "./arch/arm64/include/asm/preempt.h"
	return !pc || !({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_136(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(ti->preempt_count) == sizeof(char) ||
			       sizeof(ti->preempt_count) == sizeof(short) ||
			       sizeof(ti->preempt_count) == sizeof(int) ||
			       sizeof(ti->preempt_count) == sizeof(long)) ||
			      sizeof(ti->preempt_count) == sizeof(long long)))
				__compiletime_assert_136();
		} while (0);
		(*(const volatile __typeof_unqual__(ti->preempt_count) *)&(
			ti->preempt_count));
	});
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
should_resched(int preempt_offset)
{
	u64 pc = ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_137(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(((struct thread_info *)get_current())
					      ->preempt_count) == sizeof(char) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt_count) ==
				       sizeof(short) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt_count) == sizeof(int) ||
			       sizeof(((struct thread_info *)get_current())
					      ->preempt_count) ==
				       sizeof(long)) ||
			      sizeof(((struct thread_info *)get_current())
					     ->preempt_count) ==
				      sizeof(long long)))
				__compiletime_assert_137();
		} while (0);
		(*(const volatile __typeof_unqual__(
			((struct thread_info *)get_current())->preempt_count)
			   *)&(((struct thread_info *)get_current())
				       ->preempt_count));
	});
	return pc == preempt_offset;
}

void preempt_schedule(void);
void preempt_schedule_notrace(void);
# 80 "./include/linux/preempt.h" 2
# 90 "./include/linux/preempt.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) unsigned char interrupt_context_level(void)
{
	unsigned long pc = preempt_count();
	unsigned char level = 0;

	level += !!(pc & ((((1UL << (4)) - 1) << (((0 + 8) + 8) + 4))));
	level += !!(pc & ((((1UL << (4)) - 1) << (((0 + 8) + 8) + 4)) |
			  (((1UL << (4)) - 1) << ((0 + 8) + 8))));
	level += !!(pc &
		    ((((1UL << (4)) - 1) << (((0 + 8) + 8) + 4)) |
		     (((1UL << (4)) - 1) << ((0 + 8) + 8)) | (1UL << (0 + 8))));

	return level;
}
# 319 "./include/linux/preempt.h"
struct preempt_notifier;
struct task_struct;
# 336 "./include/linux/preempt.h"
struct preempt_ops {
	void (*sched_in)(struct preempt_notifier *notifier, int cpu);
	void (*sched_out)(struct preempt_notifier *notifier,
			  struct task_struct *next);
};
# 349 "./include/linux/preempt.h"
struct preempt_notifier {
	struct hlist_node link;
	struct preempt_ops *ops;
};

void preempt_notifier_inc(void);
void preempt_notifier_dec(void);
void preempt_notifier_register(struct preempt_notifier *notifier);
void preempt_notifier_unregister(struct preempt_notifier *notifier);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
preempt_notifier_init(struct preempt_notifier *notifier,
		      struct preempt_ops *ops)
{
	notifier->link.next = ((void *)0);
	notifier->link.pprev = ((void *)0);
	notifier->ops = ops;
}
# 462 "./include/linux/preempt.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void preempt_enable_nested(void)
{
	if (0)
		do {
			__asm__ __volatile__("" : : : "memory");
			if (__builtin_expect(!!(__preempt_count_dec_and_test()),
					     0))
				preempt_schedule();
		} while (0);
}

static __attribute__((__unused__))
const bool class_preempt_is_conditional = false;
typedef void lock_preempt_t;
typedef struct {
	void *lock;
	;
} class_preempt_t;
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
class_preempt_destructor(class_preempt_t *_T)
{
	if (_T->lock) {
		do {
			__asm__ __volatile__("" : : : "memory");
			if (__builtin_expect(!!(__preempt_count_dec_and_test()),
					     0))
				preempt_schedule();
		} while (0);
	}
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void *
class_preempt_lock_ptr(class_preempt_t *_T)
{
	void *_ptr = (void *)(unsigned long)*(&_T->lock);
	if (IS_ERR(_ptr)) {
		_ptr = ((void *)0);
	}
	return _ptr;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
class_preempt_lock_err(class_preempt_t *_T)
{
	long _rc = (unsigned long)*(&_T->lock);
	if (!_rc) {
		_rc = -16;
	}
	if (!__builtin_expect(!!((unsigned long)(void *)(_rc) >=
				 (unsigned long)-4095),
			      0)) {
		_rc = 0;
	}
	return _rc;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) class_preempt_t
class_preempt_constructor(void)
{
	class_preempt_t _t = { .lock = (void *)1 },
			*_T __attribute__((__unused__)) = &_t;
	do {
		__preempt_count_add(1);
		__asm__ __volatile__("" : : : "memory");
	} while (0);
	return _t;
}
static __attribute__((__unused__))
const bool class_preempt_notrace_is_conditional = false;
typedef void lock_preempt_notrace_t;
typedef struct {
	void *lock;
	;
} class_preempt_notrace_t;
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
class_preempt_notrace_destructor(class_preempt_notrace_t *_T)
{
	if (_T->lock) {
		do {
			__asm__ __volatile__("" : : : "memory");
			if (__builtin_expect(!!(__preempt_count_dec_and_test()),
					     0))
				preempt_schedule_notrace();
		} while (0);
	}
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void *
class_preempt_notrace_lock_ptr(class_preempt_notrace_t *_T)
{
	void *_ptr = (void *)(unsigned long)*(&_T->lock);
	if (IS_ERR(_ptr)) {
		_ptr = ((void *)0);
	}
	return _ptr;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) int
class_preempt_notrace_lock_err(class_preempt_notrace_t *_T)
{
	long _rc = (unsigned long)*(&_T->lock);
	if (!_rc) {
		_rc = -16;
	}
	if (!__builtin_expect(!!((unsigned long)(void *)(_rc) >=
				 (unsigned long)-4095),
			      0)) {
		_rc = 0;
	}
	return _rc;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) class_preempt_notrace_t
class_preempt_notrace_constructor(void)
{
	class_preempt_notrace_t _t = { .lock = (void *)1 },
				*_T __attribute__((__unused__)) = &_t;
	do {
		__preempt_count_add(1);
		__asm__ __volatile__("" : : : "memory");
	} while (0);
	return _t;
}
# 480 "./include/linux/preempt.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool preempt_model_none(void)
{
	return 0;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
preempt_model_voluntary(void)
{
	return 0;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
preempt_model_full(void)
{
	return 0;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
preempt_model_lazy(void)
{
	return 1;
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
preempt_model_rt(void)
{
	return 0;
}

extern const char *preempt_model_str(void);
# 515 "./include/linux/preempt.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) bool
preempt_model_preemptible(void)
{
	return preempt_model_full() || preempt_model_lazy() ||
	       preempt_model_rt();
}
# 9 "arch/arm64/include/asm/percpu.h" 2

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
set_my_cpu_offset(unsigned long off)
{
	asm volatile(".if "
		     "1"
		     " == 1\n"
		     "661:\n\t"
		     "msr tpidr_el1, %0"
		     "\n"
		     "662:\n"
		     ".pushsection .altinstructions,\"a\"\n"
		     " .word 661b - .\n"
		     " .word 663f - .\n"
		     " .hword "
		     "63"
		     "\n"
		     " .byte 662b-661b\n"
		     " .byte 664f-663f\n"
		     ".popsection\n"
		     ".subsection 1\n"
		     "663:\n\t"
		     "msr tpidr_el2, %0"
		     "\n"
		     "664:\n\t"
		     ".org	. - (664b-663b) + (662b-661b)\n\t"
		     ".org	. - (662b-661b) + (664b-663b)\n\t"
		     ".previous\n"
		     ".endif\n"

		     ::"r"(off)
		     : "memory");
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__hyp_my_cpu_offset(void)
{
	return ({
		u64 __val;
		asm volatile("mrs %0, "
			     "tpidr_el2"
			     : "=r"(__val));
		__val;
	});
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__kern_my_cpu_offset(void)
{
	unsigned long off;

	asm(".if "
	    "1"
	    " == 1\n"
	    "661:\n\t"
	    "mrs %0, tpidr_el1"
	    "\n"
	    "662:\n"
	    ".pushsection .altinstructions,\"a\"\n"
	    " .word 661b - .\n"
	    " .word 663f - .\n"
	    " .hword "
	    "63"
	    "\n"
	    " .byte 662b-661b\n"
	    " .byte 664f-663f\n"
	    ".popsection\n"
	    ".subsection 1\n"
	    "663:\n\t"
	    "mrs %0, tpidr_el2"
	    "\n"
	    "664:\n\t"
	    ".org	. - (664b-663b) + (662b-661b)\n\t"
	    ".org	. - (662b-661b) + (664b-663b)\n\t"
	    ".previous\n"
	    ".endif\n"

	    : "=r"(off)
	    : "Q"(*(const unsigned long *)current_stack_pointer));

	return off;
}
# 123 "arch/arm64/include/asm/percpu.h"
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__percpu_read_8(void *ptr)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_138(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u8 *)ptr) == sizeof(char) ||
			       sizeof(*(u8 *)ptr) == sizeof(short) ||
			       sizeof(*(u8 *)ptr) == sizeof(int) ||
			       sizeof(*(u8 *)ptr) == sizeof(long)) ||
			      sizeof(*(u8 *)ptr) == sizeof(long long)))
				__compiletime_assert_138();
		} while (0);
		(*(const volatile __typeof_unqual__(*(u8 *)ptr) *)&(
			*(u8 *)ptr));
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_write_8(void *ptr, unsigned long val)
{
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_139(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u8 *)ptr) == sizeof(char) ||
			       sizeof(*(u8 *)ptr) == sizeof(short) ||
			       sizeof(*(u8 *)ptr) == sizeof(int) ||
			       sizeof(*(u8 *)ptr) == sizeof(long)) ||
			      sizeof(*(u8 *)ptr) == sizeof(long long)))
				__compiletime_assert_139();
		} while (0);
		do {
			*(volatile typeof(*(u8 *)ptr) *)&(*(u8 *)ptr) =
				((u8)val);
		} while (0);
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__percpu_read_16(void *ptr)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_140(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u16 *)ptr) == sizeof(char) ||
			       sizeof(*(u16 *)ptr) == sizeof(short) ||
			       sizeof(*(u16 *)ptr) == sizeof(int) ||
			       sizeof(*(u16 *)ptr) == sizeof(long)) ||
			      sizeof(*(u16 *)ptr) == sizeof(long long)))
				__compiletime_assert_140();
		} while (0);
		(*(const volatile __typeof_unqual__(*(u16 *)ptr) *)&(
			*(u16 *)ptr));
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_write_16(void *ptr, unsigned long val)
{
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_141(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u16 *)ptr) == sizeof(char) ||
			       sizeof(*(u16 *)ptr) == sizeof(short) ||
			       sizeof(*(u16 *)ptr) == sizeof(int) ||
			       sizeof(*(u16 *)ptr) == sizeof(long)) ||
			      sizeof(*(u16 *)ptr) == sizeof(long long)))
				__compiletime_assert_141();
		} while (0);
		do {
			*(volatile typeof(*(u16 *)ptr) *)&(*(u16 *)ptr) =
				((u16)val);
		} while (0);
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__percpu_read_32(void *ptr)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_142(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u32 *)ptr) == sizeof(char) ||
			       sizeof(*(u32 *)ptr) == sizeof(short) ||
			       sizeof(*(u32 *)ptr) == sizeof(int) ||
			       sizeof(*(u32 *)ptr) == sizeof(long)) ||
			      sizeof(*(u32 *)ptr) == sizeof(long long)))
				__compiletime_assert_142();
		} while (0);
		(*(const volatile __typeof_unqual__(*(u32 *)ptr) *)&(
			*(u32 *)ptr));
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_write_32(void *ptr, unsigned long val)
{
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_143(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u32 *)ptr) == sizeof(char) ||
			       sizeof(*(u32 *)ptr) == sizeof(short) ||
			       sizeof(*(u32 *)ptr) == sizeof(int) ||
			       sizeof(*(u32 *)ptr) == sizeof(long)) ||
			      sizeof(*(u32 *)ptr) == sizeof(long long)))
				__compiletime_assert_143();
		} while (0);
		do {
			*(volatile typeof(*(u32 *)ptr) *)&(*(u32 *)ptr) =
				((u32)val);
		} while (0);
	} while (0);
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) unsigned long
__percpu_read_64(void *ptr)
{
	return ({
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_144(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u64 *)ptr) == sizeof(char) ||
			       sizeof(*(u64 *)ptr) == sizeof(short) ||
			       sizeof(*(u64 *)ptr) == sizeof(int) ||
			       sizeof(*(u64 *)ptr) == sizeof(long)) ||
			      sizeof(*(u64 *)ptr) == sizeof(long long)))
				__compiletime_assert_144();
		} while (0);
		(*(const volatile __typeof_unqual__(*(u64 *)ptr) *)&(
			*(u64 *)ptr));
	});
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_write_64(void *ptr, unsigned long val)
{
	do {
		do {
			__attribute__((__noreturn__)) extern void
			__compiletime_assert_145(void) __attribute__((__error__(
				"Unsupported access size for {READ,WRITE}_ONCE().")));
			if (!((sizeof(*(u64 *)ptr) == sizeof(char) ||
			       sizeof(*(u64 *)ptr) == sizeof(short) ||
			       sizeof(*(u64 *)ptr) == sizeof(int) ||
			       sizeof(*(u64 *)ptr) == sizeof(long)) ||
			      sizeof(*(u64 *)ptr) == sizeof(long long)))
				__compiletime_assert_145();
		} while (0);
		do {
			*(volatile typeof(*(u64 *)ptr) *)&(*(u64 *)ptr) =
				((u64)val);
		} while (0);
	} while (0);
}

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_add_case_8(void *ptr, unsigned long val)
{
	unsigned int loop;
	u8 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"b"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"b"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u8 *)ptr)
		: [val] "r"((u8)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_add_case_16(void *ptr, unsigned long val)
{
	unsigned int loop;
	u16 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"h"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"h"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u16 *)ptr)
		: [val] "r"((u16)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_add_case_32(void *ptr, unsigned long val)
{
	unsigned int loop;
	u32 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u32 *)ptr)
		: [val] "r"((u32)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_add_case_64(void *ptr, unsigned long val)
{
	unsigned int loop;
	u64 tmp;
	asm volatile(
		".if 1 == 1\n"
		"661:\n\t"
		"1:	ldxr	%[tmp], %[ptr]\n"
		"       add	%[tmp], %[tmp], %[val]\n"
		"	stxr	%w[loop], %[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword 42\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n"
		".arch_extension lse\n"
		"ldadd	%[val], %[tmp], %[ptr]\n"
		".rept	3\n"
		"nop\n"
		".endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u64 *)ptr)
		: [val] "r"((u64)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_andnot_case_8(void *ptr, unsigned long val)
{
	unsigned int loop;
	u8 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"b"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"bic"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"b"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldclr"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u8 *)ptr)
		: [val] "r"((u8)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_andnot_case_16(void *ptr, unsigned long val)
{
	unsigned int loop;
	u16 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"h"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"bic"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"h"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldclr"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u16 *)ptr)
		: [val] "r"((u16)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_andnot_case_32(void *ptr, unsigned long val)
{
	unsigned int loop;
	u32 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"bic"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldclr"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u32 *)ptr)
		: [val] "r"((u32)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_andnot_case_64(void *ptr, unsigned long val)
{
	unsigned int loop;
	u64 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		""
		"[tmp], %[ptr]\n"
		"bic"
		"\t%"
		""
		"[tmp], %"
		""
		"[tmp], %"
		""
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		""
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldclr"
		"\t%"
		""
		"[val], %"
		""
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u64 *)ptr)
		: [val] "r"((u64)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_or_case_8(void *ptr, unsigned long val)
{
	unsigned int loop;
	u8 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"b"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"orr"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"b"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldset"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u8 *)ptr)
		: [val] "r"((u8)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_or_case_16(void *ptr, unsigned long val)
{
	unsigned int loop;
	u16 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"h"
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"orr"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		"h"
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldset"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u16 *)ptr)
		: [val] "r"((u16)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_or_case_32(void *ptr, unsigned long val)
{
	unsigned int loop;
	u32 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		"w"
		"[tmp], %[ptr]\n"
		"orr"
		"\t%"
		"w"
		"[tmp], %"
		"w"
		"[tmp], %"
		"w"
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		"w"
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldset"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u32 *)ptr)
		: [val] "r"((u32)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) void
__percpu_or_case_64(void *ptr, unsigned long val)
{
	unsigned int loop;
	u64 tmp;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		""
		"[tmp], %[ptr]\n"
		"orr"
		"\t%"
		""
		"[tmp], %"
		""
		"[tmp], %"
		""
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		""
		"[tmp], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldset"
		"\t%"
		""
		"[val], %"
		""
		"[tmp], %[ptr]\n"
		".rept	"
		"3"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [tmp] "=&r"(tmp), [ptr] "+Q"(*(u64 *)ptr)
		: [val] "r"((u64)(val)));
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u8
__percpu_add_return_case_8(void *ptr, unsigned long val)
{
	unsigned int loop;
	u8 ret;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"b"
		"\t%"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		"	stxr"
		"b"
		"\t%w[loop], %"
		"w"
		"[ret], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		".rept	"
		"2"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [ret] "=&r"(ret), [ptr] "+Q"(*(u8 *)ptr)
		: [val] "r"((u8)(val)));
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u16
__percpu_add_return_case_16(void *ptr, unsigned long val)
{
	unsigned int loop;
	u16 ret;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		"h"
		"\t%"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		"	stxr"
		"h"
		"\t%w[loop], %"
		"w"
		"[ret], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		".rept	"
		"2"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [ret] "=&r"(ret), [ptr] "+Q"(*(u16 *)ptr)
		: [val] "r"((u16)(val)));
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u32
__percpu_add_return_case_32(void *ptr, unsigned long val)
{
	unsigned int loop;
	u32 ret;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		"w"
		"[ret], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		"w"
		"[val], %"
		"w"
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		"w"
		"[ret], %"
		"w"
		"[ret], %"
		"w"
		"[val]\n"
		".rept	"
		"2"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [ret] "=&r"(ret), [ptr] "+Q"(*(u32 *)ptr)
		: [val] "r"((u32)(val)));
	return ret;
}
static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0))) u64
__percpu_add_return_case_64(void *ptr, unsigned long val)
{
	unsigned int loop;
	u64 ret;
	asm volatile(
		".if "
		"1"
		" == 1\n"
		"661:\n\t"
		"1:	ldxr"
		""
		"\t%"
		""
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		""
		"[ret], %"
		""
		"[ret], %"
		""
		"[val]\n"
		"	stxr"
		""
		"\t%w[loop], %"
		""
		"[ret], %[ptr]\n"
		"	cbnz	%w[loop], 1b"
		"\n"
		"662:\n"
		".pushsection .altinstructions,\"a\"\n"
		" .word 661b - .\n"
		" .word 663f - .\n"
		" .hword "
		"42"
		"\n"
		" .byte 662b-661b\n"
		" .byte 664f-663f\n"
		".popsection\n"
		".subsection 1\n"
		"663:\n\t"
		".arch_extension lse\n"
		"ldadd"
		"\t%"
		""
		"[val], %"
		""
		"[ret], %[ptr]\n"
		"add"
		"\t%"
		""
		"[ret], %"
		""
		"[ret], %"
		""
		"[val]\n"
		".rept	"
		"2"
		"\nnop\n.endr\n"
		"\n"
		"664:\n\t"
		".org	. - (664b-663b) + (662b-661b)\n\t"
		".org	. - (662b-661b) + (664b-663b)\n\t"
		".previous\n"
		".endif\n"
		: [loop] "=&r"(loop), [ret] "=&r"(ret), [ptr] "+Q"(*(u64 *)ptr)
		: [val] "r"((u64)(val)));
	return ret;
}
# 266 "arch/arm64/include/asm/percpu.h"
# 1 "./include/asm-generic/percpu.h" 1

# 1 "./include/linux/threads.h" 1
# 9 "./include/asm-generic/percpu.h" 2
# 1 "./include/linux/percpu-defs.h" 1
# 312 "./include/linux/percpu-defs.h"
extern void __bad_size_call_parameter(void);

static inline __attribute__((__gnu_inline__)) __attribute__((__unused__))
__attribute__((patchable_function_entry(0, 0)))
__attribute__((__always_inline__)) void
__this_cpu_preempt_check(const char *op)
{
}
# 10 "./include/asm-generic/percpu.h" 2
# 34 "./include/asm-generic/percpu.h"
extern unsigned long __per_cpu_offset[512];
# 63 "./include/asm-generic/percpu.h"
extern void setup_per_cpu_areas(void);
# 267 "arch/arm64/include/asm/percpu.h" 2
