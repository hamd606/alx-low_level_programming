#include "main.h"

/*
 *_put_recursion - prints a str using _putchar
 *@s: input str
 */
void _puts_recursion(char *s);
{
	int i;

	i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');

}
