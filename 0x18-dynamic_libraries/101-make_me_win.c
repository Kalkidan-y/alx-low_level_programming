/* 101-make_me_win.c */

#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdlib.h>

// Function to intercept the rand function and replace it
int rand(void) {
    return 9;  // Replace with the number you want
}

// Function to intercept the srand function and replace it
void srand(unsigned int seed) {
    // Do nothing to keep the seed constant
}

