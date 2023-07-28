#include "main.h"
#include <stdio.h>
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
#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * in a string to uppercase. Uses ascii conversion, not toupper.
 * @d: is a pointer to the string for conversion.
 * Return: I should return d, which is the converted string.
 */
char *string_toupper(char *d)
{
        /**
         * iterating through string using a loop with int b.
         * also d[b] makes sure index is not null '\0'
         */
        for (int b = 0; d[b]; b++)
        {
                /**
                 * In this if condition, I'm checking that the character's
                 * ascii value is between a and z.
                 * If it is, I subtract 32 from it to make it cap
                 */
                if (d[b] >= 'a' && d[b] <= 'z')
                {
                        d[b] = d[b] - 32;
                }
        }

        /*Here I am just returning the converted string*/
        return (d);
}
