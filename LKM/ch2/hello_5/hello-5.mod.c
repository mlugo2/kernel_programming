#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc0554ace, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbe7d4831, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x5c247050, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0x3918f89d, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf6f99050, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x44eb8bcc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7892A7068A76F8446058757");
