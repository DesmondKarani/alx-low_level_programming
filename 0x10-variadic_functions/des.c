#include <stdarg.h>
#include "main.h"
int Times1(int n, ...)
{
	int i;
	va_list arguments;
	int sum = 0;

	 if (n == 0)
                return 0;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arguments, int);
	}

	va_end(arguments);

	return sum;
}
