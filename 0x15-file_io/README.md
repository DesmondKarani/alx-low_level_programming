# 0x15. C - File I/O

## Overview

This project focuses on understanding File Input/Output operations in C. At the end of the project, students should be capable of handling files, managing file descriptors, and mastering I/O system calls.

## Learning Objectives

- Understand and identify sources of information online.
- Create, open, close, read, and write files in C.
- Know what file descriptors are and their importance.
- Understand the 3 standard file descriptors and their POSIX names.
- Use I/O system calls: `open`, `close`, `read`, and `write`.
- Utilize flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
- Set file permissions during file creation using the `open` system call.
- Differentiate between functions and system calls.

## Requirements

- **Editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Compiler:** gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style Guidelines:** Betty style, checked with `betty-style.pl` and `betty-doc.pl`
- **Allowed Standard Library Functions:** `malloc`, `free`, `exit`
- **Allowed syscalls:** `read`, `write`, `open`, `close`
- **Header File:** All function prototypes should reside in `main.h`, which must be include guarded.

## Prohibited

- Publishing content from this project.
- Use of global variables.
- More than 5 functions per file.
- Use of C standard library functions other than the ones mentioned in the requirements.

## Tips

- Always prefer symbolic constants (POSIX) over numbers for better clarity and maintainability.

## Author

Desmond Karani

## Acknowledgments

- ALX School curriculum.
