#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Johannes 4 GNU/LINUX");
MODULE_DESCRIPTION("A hello world LKM");

/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init ModuleInit(void){
	printk("Hello, Kernel\n");
	return 0;
}

/**
 * @brief Yhis functin is called, when the modudle id removed from the kernel
 */

static void __exit ModuleExit(void){
	printk("Bye Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);

