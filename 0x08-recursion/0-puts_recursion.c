#include "main.h"

/*
 * _put_recursion - prints a str using _putchar
 *@s: input str
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
		_putchar(s[i]);

	if (*s)
	{
		i++;
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
