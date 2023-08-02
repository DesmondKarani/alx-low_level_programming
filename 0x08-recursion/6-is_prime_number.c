#include "main.h"
/**
 * is_prime_number -  a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: integer to be used.
 * @i: integer to be used.
 * Return: returns 1 if prime and 0 otherwise.
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - This servers as a helper function for the previous
 * function.
 * @n: integer to be used.
 * @i: integer to be used.
 * Return: returns helping primes.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
