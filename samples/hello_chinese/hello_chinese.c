// SPDX-License-Identifier: GPL-2.0
/*
 * hello_chinese.c - A sample kernel module that prints a Chinese greeting.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int __init hello_chinese_init(void)
{
	pr_info("你好 (Hello in Chinese)\n");
	return 0;
}

static void __exit hello_chinese_exit(void)
{
	pr_info("再见 (Goodbye in Chinese)\n");
}

module_init(hello_chinese_init);
module_exit(hello_chinese_exit);

MODULE_AUTHOR("Linux Kernel Contributors");
MODULE_DESCRIPTION("Chinese greeting sample module");
MODULE_LICENSE("GPL");
