/**
 * stop.c - Illustration of multi filed modules
 */

#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

void cleanup_module(void) 
{
    pr_info("The module is unloaded.\n");
}
