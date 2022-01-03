/**
 * hello-04.c - Demonstrates module documentation.
 */

#include <linux/init.h> // Needed for the macros
#include <linux/kernel.h> // Needed for pr_info()
#include <linux/module.h> // Needed by all modules

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anh Hoang Nguyen");
MODULE_DESCRIPTION("A Sample Driver");

static int hello4_data __initdata = 4;

static int __init hello_04_init(void)
{
    pr_info("Hello, world %d\n", hello4_data);
    return 0;

}

static void __exit hello_04_exit(void)
{
    pr_info("Goodbye, world 4\n");
}

module_init(hello_04_init);
module_exit(hello_04_exit);