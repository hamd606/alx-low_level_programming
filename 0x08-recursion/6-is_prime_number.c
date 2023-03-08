
#include "main.h"

/**
 * is_prime_number - checks if prime
 * @n: input
 * Return: 1 if true 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	if (n % 2 == 0)
		return n == 2;
	for (int p = 3; p * p <= n; p += 2)
	{
		if (is_prime_number(p) && n % p == 0)
			return 0;
	}
	return 1;
}
