#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

static int __init helloworld_init(void)
{
	pr_info("Hello world\n");
	return 0;
}

static void __exit helloworld_exit(void)
{
	pr_info("Good bye world\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rai");
MODULE_DESCRIPTION("A simple hello world kernel module");
MODULE_INFO(board,"Beaglebone black REV A5");
