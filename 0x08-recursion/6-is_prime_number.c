
#include "main.h"

/**
 * is_prime_number - checks if prime
 * @n: input
 * Return: 1 if true 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if(n == i)
		return 0;
	else
		if(n % i == 0)
			return (1);
		else
		{
			return (is_prime_number(i + 1, n));
		}
}
