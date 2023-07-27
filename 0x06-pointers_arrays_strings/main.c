#include "main.h"
#include <stdio.h>
#include <ctype.h>
char *string_toupper(char *d);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

/*The function that converts string characters from lower to uppercase*/
char *string_toupper(char *d)
{
        for (int b = 0; d[b]; b++)
        {
                d[b] = toupper((unsigned char) d[b]);
        }

        return (d);
}
