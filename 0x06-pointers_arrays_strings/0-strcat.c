#include <string.h>
#include "main.h"
/**
 *_strcat - a function that concatenates two strings.
 *
 *@dest: variable to be used.
 *@src: variable to be used.
 *Return: the function should return dest, a combined string,
 *after src has been appended to it.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
