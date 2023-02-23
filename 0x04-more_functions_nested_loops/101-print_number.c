#include "main.h"
#include <stdio.h>

/*
 * print_number - prints number using putchar
 * @n: input to be printed
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	_putchar(n % 10);

	while (n % 10)
		print_number(n % 10);
}
