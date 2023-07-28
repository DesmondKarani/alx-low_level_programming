#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @sed: the string to be capitalized.
 * the function returns sed, the converted string.
 */
char *cap_string(char *sed)
{
	int index = 0;

	while (sed[index])
	{
		while (!(sed[index] >= 'a' && sed[index] <= 'z'))
			index++;

		if (sed[index - 1] == ' ' ||
		    sed[index - 1] == '\t' ||
		    sed[index - 1] == '\n' ||
		    sed[index - 1] == ',' ||
		    sed[index - 1] == ';' ||
		    sed[index - 1] == '.' ||
		    sed[index - 1] == '!' ||
		    sed[index - 1] == '?' ||
		    sed[index - 1] == '"' ||
		    sed[index - 1] == '(' ||
		    sed[index - 1] == ')' ||
		    sed[index - 1] == '{' ||
		    sed[index - 1] == '}' ||
		    index == 0)
			sed[index] -= 32;

		index++;
	}

	return (sed);
}
