#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 *	raised to the power of y.
 * @x: The base integer to be used.
 * @y: The exponent to be used.
 * Return: The function returns the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
