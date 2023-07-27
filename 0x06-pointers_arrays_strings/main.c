#include "main.h"
#include <stdio.h>
#include <ctype.h>

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
char *string_toupper(char *str)
{
        for (int b = 0; str[b]; b++)
        {
                str[b] = toupper((unsigned char) str[b]);
        }

        return (str);
}
