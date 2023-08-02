#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: integer to be used.
 * @i: Integer to be used.
 * Return: returns a square root.
 */
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}
/**
 * * sqrt_helper - Basically a helper function.
 * Return: returns the helper.
 * @n: integer to be used.
 * @i: integer to be used.
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
