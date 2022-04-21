
#include <linux/kernel.h>

asmlinkage long sys_advice(int choice) {

    switch (choice) {
        case 0: printk ("Hi! It's the kernel\n"); break;
        case 1: printk ("I am good. How about you?\n"); break;
        case 2: printk ("I am the kernel\n"); break;
        case 3: printk ("Pretty sunny with slight wind\n"); break;
        case 4: printk ("I run your computer's operating system\n"); break;
        case 5: printk ("It's going good how about you?\n"); break;
        case 6: printk ("You are not a computer?\n"); break;
        case 7: printk ("I schedule all your computer's tasks\n"); break;
        case 8: printk ("To be less complicated\n"); break;

        default: 
        printk("Hi! Thanks for starting me up");
    }
    
    return choice;

}