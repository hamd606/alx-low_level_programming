#include <stdio.h>

/**
 * main - prints the largest prime factor of 612..43
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long divisor = 2;
	long largest_prime = 0;

	while (n != 1)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
			largest_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
