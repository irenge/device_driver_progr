#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Jules Irenge");
MODULE_DESCRIPTION("");
MODULE_VERSION("1.0.0");

static int __init  hello_init(void)
{
printk(KERN_ALERT "HELLO, WORLD \n");
return 0;
}
static void __exit  hello_exit(void)
{
printk(KERN_ALERT "GOOD BYE WORLD \n");
}
module_init(hello_init);
module_exit(hello_exit);
