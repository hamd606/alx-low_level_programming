#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to get m from n
 * @n: first number
 * @m: second number
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		m = m >> 1;
		n = n >> 1;
	}

	return (i);

}
