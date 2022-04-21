#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <linux/kernel.h>
#include <stdlib.h>


int main (int argc, char * argv[]) {
    //round #. Everytime you get a reply, user must manually +=round 
    //first round input a random number outside of 0 - 8 in the syscall to start
    int round = atoi (argv[1]);
    int choice = atoi (argv [2] );
    long int syscall_value;

    switch (round) {
        case 0: 
        printf("[0] Hello ?\n");
        printf("[1] How are you ? \n");
        printf("[2] What's your name ?\n");

        syscall_value = syscall(450, choice); 
        printf( "\n\n   System call 'dialogue' returned %ld\n\n", syscall_value );
        break;

        case 1:
        printf("[3] How's the weather like today? \n");
        printf("[4] What do you do for a living? \n");
        printf("[5] How's your day going? \n");

        syscall_value = syscall(450, choice); //insert syscall number 
        printf( "\n\n   System call 'dialogue' returned %ld\n\n", syscall_value );
        break;

        case 2: 
        printf("[6] What was your first impression of me? \n");
        printf("[7] What is one fact about you? \n");
        printf("[8] What is one thing you wish? \n");

        syscall_value = syscall(450, choice); //insert syscall number 
        printf( "\n\n   System call 'dialogue' returned %ld\n\n", syscall_value );
        break;
    }
    
    return 100;

}