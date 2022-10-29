# CS252-Assignment
## Project : Introduction to Linux Kernel Modules

Introduction to Linux Kernel Modules. (Operating System Concepts, 10th Edition, Chapter 2)

## Description

This assignment has four tasks:

**Task 1:** The first part of this project involves creating and loading a module into the Linux kernel. Kernel modules are loaded using the `insmod` command, and  the contents of this message in the kernel log buffer are checked using `dmesg` command.

**Task 2:** a)Print out the value of `GOLDEN RATIO PRIME` in the simple init() function.\
b) Print out the greatest common divisor of 3,300 and 24 in the simple exit() function.\
c)Print out the values of `jiffies` and `HZ` in the simple init() function.\
d)Print out the value of `jiffies` in the simple exit() function.

**Task 3:** This exercise involves designing kernel modules that create additional entries in the `/proc` file system. A `/proc` entry named `/proc/hello` is created. The file is read with the command `cat/proc/hello`.

**Task 4:** a)Design a kernel module that creates a `/proc` file named `/proc/jiffies` that reports the current value of `jiffies` when the `/proc/jiffies` file is read, such as with the command `cat /proc/jiffies`. Be sure to remove `/proc/jiffies` when the module is removed.\
b) Design a kernel module that creates a `/proc` file named `/proc/seconds` that reports the number of elapsed seconds since the kernel module was loaded. This will involve using the value of `jiffies` as well as the `HZ`. When a user enters the command `cat /proc/seconds` your kernel module will report the number of seconds that have elapsed since the kernel module was first loaded. Be sure to remove `/proc/seconds` when the module is removed.
