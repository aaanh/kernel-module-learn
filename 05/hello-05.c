/**
 * hello-05.c - Demonstrates command line argument passing to a module. 
 */

#include <linux/init.h> // Needed for the macros
#include <linux/kernel.h> // Needed for pr_info()
#include <linux/module.h> // Needed by all modules

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anh Hoang Nguyen");
MODULE_DESCRIPTION("A Sample Driver");

static short int myshort = 1;
static int myint = 420;
static long int mylong = 999;
static char *mystring = "blah";
static int myintarray[2] = {420, 69};
static int arr_argc = 0;

/**
 * module_param(foo, int, 0000)
 * The first param is the param name.
 * The second param is its data type.
 * The final argument is the permissions bits,
 * for exposing parameters in sysfs (if non-zero) at a later stage.
 */

module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "A short integer.");

module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myint, "An integer.");

module_param(mylong, long, S_IRUSR);
MODULE_PARM_DESC(mylong, "A long integer.");

module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string.");