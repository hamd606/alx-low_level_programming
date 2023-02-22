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
	_putchar(n % 10);
	return (n % 10);
}
