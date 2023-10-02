#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	/* if filename is NULL return -1 */
	if (filename == NULL)
		return (-1);

	/* open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, append it to the file */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		write_count = write(fd, text_content, length);
		if (write_count == -1 || (size_t)write_count != length)
		{
			close(fd);
			return (-1);
		}
	}

	/* close the file and return success */
	close(fd);
	return (1);
}
