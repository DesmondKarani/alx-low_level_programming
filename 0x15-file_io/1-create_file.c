#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;
	size_t len;

	if (filename == NULL) /* check if filename is valid */
		return (-1);

	/**
	 * create the file with rw------- permissions,
	 * or truncate it if it exists
	 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1) /* check if file creation failed */
		return (-1);

	if (text_content == NULL) /* check if text content is valid */
		return (1);

	len = 0;
	/* calculate the length of text content */
	while (text_content[len] != '\0')
		len++;

	/* write the text content to the file */
	nwrite = write(fd, text_content, len);
	if (nwrite == -1) /* check if writing failed */
		return (-1);

	close(fd); /* close the file descriptor */
	return (1); /* return success */
}
