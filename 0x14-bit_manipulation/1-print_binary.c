#include "main.h"

/**
 * print_bin - prints an int in base 2 using recursion
 * @n: input int in base 10
 */
void print_bin(unsigned long int x)
{
	if (x != 0)
	{
		print_bin(x >> 1);

		if (x & 1)
			_putchar('1');

		else
			_putchar('0');
	}
}

/**
 * print_binary - prints an int in base 2
 * @n: input in base 10
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bin(n);
}
