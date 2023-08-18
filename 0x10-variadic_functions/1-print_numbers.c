#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, separated by the separator,
*	followed by a new line.
* @separator: String to be printed between numbers.
* @n: Number of integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

/*Initialize the argument list with the number of arguments*/
va_start(args, n);

for (i = 0; i < n; i++)
{
/*Get the next argument value*/
printf("%d", va_arg(args, int));

if (i < n - 1 && separator != NULL)
printf("%s", separator);
/*Print separator if it's not the last number and separator is not NULL*/
}

printf("\n");
/*Print new line at the end*/

va_end(args);
/*Clean up*/
}
