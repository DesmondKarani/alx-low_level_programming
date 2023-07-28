#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that
 * changes all lowercase letters of a string to uppercase.
 * @d: the string to be converted with toupper.
 * Return: should return the converted string d.
 */
char *string_toupper(char *d)
{
	/**
	 * In this loop, I am iterating through each string character,
	 *starting from 0, with d[b] making sure the index is not null '\0'
	 */
	for (int b = 0; d[b]; b++)
	{
		/**
		 * Here, the loop goes through the string starting from
		 * element 0 changing them to uppercase.
		 * Uses toupper function from ctype library.
		 */
		d[b] = toupper((unsigned char) d[b]);
	}

	/*Here I am just returning the modified string*/
	return (d);
}
