#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                {
                        return (s);
                }
                s++;
        }
        /*check if 'c' is the null character*/
        if (*s == c)
        {
                return (s);
        }
        return (NULL);
}
