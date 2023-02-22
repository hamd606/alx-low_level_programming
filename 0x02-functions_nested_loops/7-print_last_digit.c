#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On false 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
		return (0 + (n % 10));
	}

	else
	{
		if (n == -2147483648)
		{
			_putchar('8');
			return (8);
		}

		else
		{
			_putchar('0' + (-1 * n % 10));
			return (0 + (-1 * n % 10));
		}
	}
}
