#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024 /* buffer size */

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread, nwrite;
	char buffer[BUFSIZE];
	
	if (argc != 3) /* check if the number of arguments is correct */
	{
		/* print error message to standard error */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /* exit with code 97 */
	}

	/* open the source file in read-only mode */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1) /* check if file opening failed */
	{
		/* print error message to standard error */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /* exit with code 98 */
	}
	
	/* create or truncate the destination file with rw-rw-r-- permissions */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1) /* check if file creation failed */
	{
		/* print error message to standard error */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from); /* close the source file descriptor */
		exit(99); /* exit with code 99 */
	}

	/* read from the source file until EOF or error */
	while ((nread = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		/* write to the destination file */
		nwrite = write(fd_to, buffer, nread);

		/* check if writing failed or incomplete */
		if (nwrite == -1 || nwrite != nread)
		{
			/* print error message to standard error */
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from); /* close the source file descriptor */
			close(fd_to); /* close the destination file descriptor */
			exit(99); /* exit with code 99 */
		}
	}

	if (nread == -1) /* check if reading failed */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); /* print error message to standard error */
		close(fd_from); /* close the source file descriptor */
		close(fd_to); /* close the destination file descriptor */
		exit(98); /* exit with code 98 */
	}

	if (close(fd_from) == -1) /* check if closing the source file failed */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from); /* print error message to standard error */
		close(fd_to); /* close the destination file descriptor */
		exit(100); /* exit with code 100 */
	}

	if (close(fd_to) == -1) /* check if closing the destination file failed */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to); /* print error message to standard error */
		exit(100); /* exit with code 100 */
	}

	return (0); /* return success */
}
