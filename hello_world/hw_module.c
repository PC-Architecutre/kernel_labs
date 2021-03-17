#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Danya Peschanskyi<https://github.com/danya-psch>");
MODULE_DESCRIPTION("Hello world kernel module");
MODULE_LICENSE("MIT");

static int __init hw_init(void)
{
	printk(KERN_ERR "Hello, Kernel!\n");
	return 0;
}

static void __exit hw_exit(void)
{
	printk(KERN_ERR "Hasta la vista, Kernel!\n");
}
module_init(hw_init);
module_exit(hw_exit);
