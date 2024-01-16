#!/bin/bash

# Compile all .c files in the current directory into a dynamic library

# Compile the .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm *.o

