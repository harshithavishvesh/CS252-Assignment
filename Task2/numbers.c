#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/hash.h>
#include <linux/gcd.h>
#include <linux/jiffies.h>
#include <asm/param.h>

/* This function is called when the module is loaded. */
int simple_init(void)
{
    printk(KERN_INFO "Loading Kernel Module\n");
    printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
    printk(KERN_INFO "Jiffies is %lu\n", jiffies);
    printk(KERN_INFO "HZ is %d\n", HZ);
    return 0;
}

/* This function is called when the module is removed. */
void simple_exit(void)
{
    unsigned long int a=3300;
    unsigned int b=24;
    printk(KERN_INFO "Removing Kernel Module\n");
    printk(KERN_INFO "GCD of %lu and %u is %lu\n", a,b,gcd(a,b));
    printk(KERN_INFO "Jiffies is %lu\n", jiffies);
}

/* Macros for registering module entry and exit points. */
module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("NITK");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("Harshitha Vishvesh");
