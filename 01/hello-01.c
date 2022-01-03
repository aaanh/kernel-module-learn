/**
 * hello-world-01 - The simplest kernel module
 */

#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int init_module(void) 
{
    pr_info("Hello world 1.\n");
    return 0;
}

void cleanup_module(void) 
{
    pr_info("Goodbye world 1.\n");
}