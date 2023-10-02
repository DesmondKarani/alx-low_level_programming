#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if the file cannot be opened or read,
 *         or if write fails or does not write the expected amount of bytes,
 *         or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;
	/* if filename is NULL return 0 */
	if (filename == NULL)
		return (0);
	/* open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* read from the file */
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* write to standard output */
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* clean up and return */
	free(buffer);
	close(fd);
	return (write_count);
}
