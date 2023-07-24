#include <main.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Return: None (void).
 */
void rev_string(char *s)
{
	char des = s[0];
	int karani = 0;
	int k;

	while (s[karani] != '\0')
	karani++;
	for (k = 0; k < karani; k++)
	{
		karani--;
		des = s[k];
		s[k] = s[karani];
		s[karani] = des;
	}
}
