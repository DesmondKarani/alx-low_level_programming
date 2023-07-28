#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @G: input value
 * Return: Rturns the encoded value through G.
 */
char *leet(char *G)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; G[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (G[i] == s1[j])
			{
				G[i] = s2[j];
			}
		}
	}
	return (G);
}
