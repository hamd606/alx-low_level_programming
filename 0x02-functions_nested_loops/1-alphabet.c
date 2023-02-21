#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets followed by endl
 *
 * Return: none
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26 ; i++)
	{
	_putchar('a' + i);

	}

	_putchar('\n');

	return;

}

