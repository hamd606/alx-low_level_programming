#include "main.h"

/**
 * puts_half - prints the last 1/2 of a string
 * @str: pointer to str
 * Return: none
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
