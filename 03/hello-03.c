/**
 * hello-03.c - Illustrating the __init, __initdata and __exit macros.
 */

#include <linux/init.h> // Needed for the macros
#include <linux/kernel.h> // Needed for pr_info()
#include <linux/module.h> // Needed by all modules

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anh Hoang Nguyen");
MODULE_DESCRIPTION("A sample driver");

static int __init hello_04_init(void)
{
    pr_info("Hello, world %d\n", hello3_data);
    return 0;

}

static void __exit hello_03_exit(void)
{
    pr_info("Goodbye, world 3\n");
}

module_init(hello_03_init);
module_exit(hello_03_exit);