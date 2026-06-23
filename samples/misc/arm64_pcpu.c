// SPDX-License-Identifier: GPL-2.0-or-later

#include <linux/init.h>
#include <linux/module.h>
#include <linux/percpu.h>
#include <linux/preempt.h>

static int __init arm64_pcpu_init(void) {
	int *__percpu my_int = alloc_percpu(int);
	preempt_disable();
	volatile int *p_my_int = (volatile int *)this_cpu_ptr(my_int);
	*p_my_int = 1;
	printk("my int: %d\n", *p_my_int);
	preempt_enable();
	return -EINVAL;
}
static void __exit arm64_pcpu_exit(void) {}

module_init(arm64_pcpu_init);
module_exit(arm64_pcpu_exit);
MODULE_DESCRIPTION("Sample configfs module");
MODULE_LICENSE("GPL");
