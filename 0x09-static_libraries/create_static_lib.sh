#!/bin/bash

# Compile all .c files into .o files
for file in *.c
do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar -rc liball.a *.o

# Clean up the .o files
rm -f *.o
