#include "main.h"

/**
 * _print_rev__recursion - prints a reversed str using _putchar
 *@s: input str
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1):
		_putchar(*s);
	}
	_putchar('\n');
}
