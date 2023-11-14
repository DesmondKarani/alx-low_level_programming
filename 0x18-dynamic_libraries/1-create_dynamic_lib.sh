#!/bin/bash
# Script that creates a dynamic library called liball.so from all the .c files
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
