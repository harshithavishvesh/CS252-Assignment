# CS252-Assignment
## Project : Introduction to Linux Kernel Modules

Introduction to Linux Kernel Modules. (Operating System Concepts, 10th Edition, Chapter 2)

## Description

This assignment has four tasks:

Task 1:The first part of this project involves creating and loading a module into the Linux kernel. Kernel modules are loaded using the 'insmod' command, and  the contents of this message in the kernel log buffer are checked using 'dmesg' command.
Task 2:

Design a kernel module that creates a `/proc` file named `/proc/jiffies` that reports the current value of `jiffies` when the `/proc/jiffies` file is read, such as with the command `cat /proc/jiffies`. Be sure to remove `/proc/jiffies` when the module is removed.
2. Design a kernel module that creates a `/proc` file named `/proc/seconds` that reports the number of elapsed seconds since the kernel module was loaded. This will involve using the value of `jiffies` as well as the `HZ rate`. When a user enters the command `cat /proc/seconds` your kernel module will report the number of seconds that have elapsed since the kernel module was first loaded. Be sure to remove `/proc/seconds` when the module is removed.
