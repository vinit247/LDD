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
	{ 0xda0c6cfe, "platform_add_devices" },
	{ 0xb3a1d6ac, "platform_device_unregister" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xd954c786, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xda0c6cfe,
	0xb3a1d6ac,
	0xd272d446,
	0xe8213e80,
	0xd272d446,
	0xd954c786,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"platform_add_devices\0"
	"platform_device_unregister\0"
	"__fentry__\0"
	"_printk\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D4C12CD4512220358B92DAC");
