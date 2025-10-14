#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x60243465, "send_sig" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x7d18b786, "find_vpid" },
	{ 0x50d3bbd5, "pid_task" },
	{ 0xb8aff722, "pcpu_hot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x19edaabb, "device_destroy" },
	{ 0x75646747, "class_destroy" },
	{ 0xb1b9cfc9, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6ca9b86a, "class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x2e3443fd, "device_create" },
	{ 0x22d6de43, "cdev_init" },
	{ 0xec957a9, "cdev_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ACF2D71BD0B9834A78F9955");
