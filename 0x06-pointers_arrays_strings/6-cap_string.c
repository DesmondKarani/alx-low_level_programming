#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @sed: the string to be capitalized.
 * is_separator - a function that checks if a character is one of
 * the predefined separators.
 * des: the variable to index and use to loop through the string.
 * Return: the function returns sed, the converted string.
 */
char *cap_string(char *sed)
{
	/*Initializing the variable I will use in the loop*/
	int des = 0;

	/**
	 * is_separator - a function that checks if a character is one of the
	 * predefined separators.
	 * @c: the character to be checked.
	 * Return: 1 if the character is a separator, 0 otherwise.
	 */
	int is_separator(char c)
	{
		return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
				c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
				c == ')' || c == '{' || c == '}');
	}

	/*if statement to capitalize first character if it is lowercase*/
	if (sed[des] >= 'a' && sed[des] <= 'z')
	{
		sed[des] = sed[des] - ('a' - 'A');
	}

	/**
	 * I introduce a loop to scan through the string
	 * and capitalize characters after space.
	 */
	for (des = 1; sed[des] != '\0'; des++)
	{
		if (is_separator(sed[des - 1]) && sed[des] >= 'a' && sed[des] <= 'z')
		{
			sed[des] = sed[des] - ('a' - 'A');
		}
	}

	return (sed);
}
