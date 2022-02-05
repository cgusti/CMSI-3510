#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

static void *child(void *ignored) {
    //below is an infinite loop
    while (1) {
    sleep(5);
    printf("Child is done sleeping in 5 seconds. \n");
    }
}

int main (int argc, char *argv[]) {
    pthread_t child_thread;
    int code; 
    char str[60];
    code = pthread_create(&child_thread, NULL, child, NULL);
    if (code) {
        fprintf(stderr, "pthread_create failed with code %d\n", code);
    }
    fgets(str, 60, stdin);
    printf("canceling child/n");
    pthread_cancel(child_thread);

    return 0; 

}