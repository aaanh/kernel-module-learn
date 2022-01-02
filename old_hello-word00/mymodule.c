#include <linux/module.h>
#include <linux/kernel.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anh Hoang Nguyen");
MODULE_DESCRIPTION("A hello world linux kernel module");

/**
 * @brief This function is called when the module is loaded into the kernel
 */
static int __init ModuleInit(void) {
    printk("Hello, Kernel!\n");
    return 0;
}

/**
 * @brief This function is called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
    printk("Goodbye, Kernel!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);