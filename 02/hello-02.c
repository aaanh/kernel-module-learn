/**
 * 2-hello.c - Demonstrating the module_init() and module_exit() marcos.
 * This is preferred over using init_module() and cleanup_module().
 */

#include <linux/init.h> // Needed for the macros
#include <linux/kernel.h> // Needed for pr_info()
#include <linux/module.h> // Needed by all modules

MODULE_LICENSE("GPL");

static int __init hello_02_init(void)
{
    pr_info("Hello, world 2\n");
    return 0;

}

static void __exit hello_02_exit(void)
{
    pr_info("Goodbye, world 2\n");
}

module_init(hello_02_init);
module_exit(hello_02_exit);