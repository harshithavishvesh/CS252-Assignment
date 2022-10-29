#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <asm/uaccess.h>

#define BUFFER_SIZE 128
#define PROC_NAME "hello"

static ssize_t proc_read(struct file *file, char *buf, size_t count, loff_t *pos);

static struct proc_ops my_procop= {
    .proc_read = proc_read,
};

/* This function is called when the module is loaded. */
static int proc_init(void)
{
    // creates the /proc/hello entry
    proc_create(PROC_NAME, 0666, NULL, &my_procop);
    return 0;
}

/* This function is called when the module is removed. */
static void proc_exit(void)
{
    // removes the /proc/hello entry
    remove_proc_entry(PROC_NAME, NULL);
}

/*This function is called each time the /proc/hello is read. */
static ssize_t proc_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos)
{
    char buffer[BUFFER_SIZE];
    int rv = 0;
    static int completed = 0;
    if (completed) {
        completed = 0;
        return 0;
    }
    completed = 1;
    rv = sprintf(buffer, "Hello World!\n");
    copy_to_user(usr_buf, buffer, rv);
    return rv;
}

/* Macros for registering module entry and exit points. */
module_init(proc_init);
module_exit(proc_exit);

MODULE_LICENSE("NITK");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("Harshitha Vishvesh");
