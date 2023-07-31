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

char *_strstr(char *haystack, char *needle)
{
        char *p1 = haystack, *p2 = needle;
        char *p1Adv = haystack;

        while (*++p2)
                p1Adv++;
        while (*p1Adv)
        {
                char *p1Begin = p1;

                p2 = needle;

                while (*p1 && *p2 && *p1 == *p2)
                {
                        p1++;
                        p2++;
                }
                if (!*p2)
                        return (p1Begin);
                p1 = p1Begin + 1;
                p1Adv++;
        }
        return (NULL);
}
