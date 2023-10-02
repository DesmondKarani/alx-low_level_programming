#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * copy_content - copies content from one file to another
 * @fd_from: file descriptor of source file
 * @fd_to: file descriptor of destination file
 * @file_from: name of source file
 * @file_to: name of destination file
 *
 * Return: 0 on success, or one of 98, 99 on error
 */
int copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t read_count, write_count;
	char buffer[BUFFER_SIZE];

	/* copy source to destination */
	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}
	/* check for read error */
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or one of 97, 98, 99, 100 on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int res;
	/* check argument count */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* create destination file */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	/* copy content */
	res = copy_content(fd_from, fd_to, argv[1], argv[2]);
	if (res != 0)
	{
		close(fd_from);
		close(fd_to);
		exit(res);
	}
	/* close files */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
