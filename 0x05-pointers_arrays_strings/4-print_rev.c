
#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: pointer input
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
