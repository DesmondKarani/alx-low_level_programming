# Search Algorithms in C

This project focuses on implementing and understanding different search algorithms in C. The aim is to explore the concepts of linear and binary search algorithms, analyze their time and space complexities, and determine the most efficient algorithm to use based on specific needs.

## Project Overview

The project is structured around the creation of efficient search algorithms under certain constraints, such as using specific compiler options and adhering to coding standards. The goal is to deepen the understanding of how search algorithms work, their applications, and their optimal use cases.

## Compilation

All files are compiled on Ubuntu 20.04 LTS using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. To compile, use a command like:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_name]
```

Replace `[output_name]` with the name you wish to give to your compiled program.

## Usage

After compilation, you can run the program using:

```bash
./[output_name]
```

Replace `[output_name]` with the name of your compiled program.

## Implemented Functions

- `int linear_search(int *array, size_t size, int value)`: Implements the linear search algorithm.
- `int binary_search(int *array, size_t size, int value)`: Implements the binary search algorithm.

## Files Description

- `linear_search.c` - Contains the implementation of the linear search algorithm.
- `binary_search.c` - Contains the implementation of the binary search algorithm.
- `search_algos.h` - The header file with all function prototypes and necessary inclusions.
- `README.md` - This file, explaining the project, compilation, and execution.

## Coding Style

All C files are written in Betty coding style for consistency and readability. For more information on the Betty coding style, visit [Betty Style Documentation](https://github.com/holbertonschool/Betty/wiki).

## Authors

- [Your Name]

## Acknowledgments

- Holberton School (providing the project guidelines and learning objectives).
```
