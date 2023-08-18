#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything depending on format.
* @format: List of types of arguments.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
/* Note: floats are promoted to double in varargs */
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("%s(nil)", sep);
break;
}
printf("%s%s", sep, str);
break;
}
sep = ", ";
i++;
}

printf("\n");

va_end(args);
}
