#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd2554727, "cdev_init" },
	{ 0xdb375fb3, "cdev_add" },
	{ 0x160b81b4, "device_create" },
	{ 0x4cea3303, "devm_kfree" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x9f222e1e, "alloc_chrdev_region" },
	{ 0x326b4c7f, "class_create" },
	{ 0xfb598b3a, "__platform_driver_register" },
	{ 0x0bc5fb0d, "unregister_chrdev_region" },
	{ 0x0064884b, "platform_driver_unregister" },
	{ 0x07a5cde6, "class_destroy" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xe8213e80, "_printk" },
	{ 0xd17123e4, "device_destroy" },
	{ 0x2e921116, "cdev_del" },
	{ 0x5ce224b8, "devm_kmalloc" },
	{ 0xd954c786, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd2554727,
	0xdb375fb3,
	0x160b81b4,
	0x4cea3303,
	0x90a48d82,
	0x9f222e1e,
	0x326b4c7f,
	0xfb598b3a,
	0x0bc5fb0d,
	0x0064884b,
	0x07a5cde6,
	0xd272d446,
	0xd272d446,
	0xe8213e80,
	0xd17123e4,
	0x2e921116,
	0x5ce224b8,
	0xd954c786,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"devm_kfree\0"
	"__ubsan_handle_out_of_bounds\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"__platform_driver_register\0"
	"unregister_chrdev_region\0"
	"platform_driver_unregister\0"
	"class_destroy\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"_printk\0"
	"device_destroy\0"
	"cdev_del\0"
	"devm_kmalloc\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3926AF5E7B845C5906FDE56");
