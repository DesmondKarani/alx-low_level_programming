#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t nread, nwrite; /* number of bytes read and written */
	char *buffer; /* buffer to store the file content */

	if (filename == NULL) /* check if filename is valid */
		return (0);

	fd = open(filename, O_RDONLY); /* open the file in read-only mode */
	if (fd == -1) /* check if file opening failed */
		return (0);

	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* check if memory allocation failed */
		return (0);

	/* read the file content into buffer */
	nread = read(fd, buffer, letters);
	if (nread == -1) /* check if file reading failed */
	{
		free(buffer); /* free the buffer memory */
		close(fd); /* close the file descriptor */
		return (0);
	}

	/* write the buffer content to standard output */
	nwrite = write(STDOUT_FILENO, buffer, nread);
	/* check if writing failed or incomplete */
	if (nwrite == -1 || nwrite != nread)
	{
		free(buffer); /* free the buffer memory */
		close(fd); /* close the file descriptor */
		return (0);
	}

	free(buffer); /* free the buffer memory */
	close(fd); /* close the file descriptor */
	return (nwrite); /* return the number of bytes written */
}
