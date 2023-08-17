#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: The number of arguments to pass to the function.
 * Return: Returns the Summation of numbers fed to the arguments,
 *	and 0 if nothing is fed.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list Arguments;
	unsigned int SumOfNumbers = 0;

	if (n == 0)
		return (0);

	va_start(Arguments, n);

	for (i = 0; i < n; i++)
	{
		SumOfNumbers = SumOfNumbers + va_arg(Arguments, unsigned int);
	}

	va_end(Arguments);

	return SumOfNumbers;
}
