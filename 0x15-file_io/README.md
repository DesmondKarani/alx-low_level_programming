# File Handling in C

This project is an endeavor to understand the fundamental concepts of file handling in the C programming language. It focuses on the creation, manipulation, and management of files and provides insights into system calls, file descriptors, and file permissions. The following README outlines the core learning objectives and serves as a guide for anyone interested in grasping the essentials of file handling in C.

## 🎯 Learning Objectives

1. **Locating Information Online:** Recognize how to look for the right source of information online.
2. **File Operations:** Understand how to create, open, close, read, and write files.
3. **File Descriptors:** Gain knowledge about what file descriptors are and how they function.
4. **Standard File Descriptors:** Know the three standard file descriptors, their purposes, and their POSIX names.
5. **Using I/O System Calls:** Learn to use the I/O system calls `open`, `close`, `read`, and `write`.
6. **File Flags:** Understand what the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR` are and how to use them.
7. **File Permissions:** Comprehend what file permissions are and how to set them when creating a file with the `open` system call.
8. **System Calls:** Grasp what a system call is.
9. **Function vs. System Call:** Understand the difference between a function and a system call.

## 📖 Examples
This section provides code examples demonstrating the implementation of various file handling operations and system calls in C. Please refer to the project's example directory for detailed and well-commented examples.

```c
// Example to open a file
int fd = open("example.txt", O_RDONLY);
```

## 📄 License
This project is open source and available under the [MIT License](LICENSE).

