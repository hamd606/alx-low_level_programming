#include "main.h"

/**
 * print_line - prints sequence of '_' forming a line
 * @n: lenght of the linee
 *
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
