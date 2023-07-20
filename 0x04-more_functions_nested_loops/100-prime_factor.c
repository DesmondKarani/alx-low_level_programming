#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: This function finds and prints the largest prime factor of the
 * number 612852475143.
 *
 * Return: 0 on success
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime;
	long int i;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			num /= i;
			largest_prime = i;
			i--;
		}
	}

	if (num != 1)
	{
		largest_prime = num;
	}

	printf("%ld\n", largest_prime);

	return (0);
}
