#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On false 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i/10)+'0');
			_putchar((i%10)+'0');
			_putchar(':');
			_putchar((j/10)+'0');
			_putchar((j%10)+'0');
			_putchar('\n');
		}
	}
}
