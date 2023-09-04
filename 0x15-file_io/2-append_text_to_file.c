#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;
	size_t len;

	if (filename == NULL) /* check if filename is valid */
		return (-1);

	/* open the file in write and append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* check if file opening failed */
		return (-1);

	if (text_content == NULL) /* check if text content is valid */
		return (1);

	len = 0;
	/* calculate the length of text content */
	while (text_content[len] != '\0')
		len++;

	/* write the text content to the end of the file */
	nwrite = write(fd, text_content, len);
	if (nwrite == -1) /* check if writing failed */
		return (-1);

	close(fd); /* close the file descriptor */
	return (1); /* return success */
}
