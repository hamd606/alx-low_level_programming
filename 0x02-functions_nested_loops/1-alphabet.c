#include "main.h"

int _putchar(char c);

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

/***
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 *int _putchar(char c)
 *{
 *	return (write(1, &c, 1));
 *}
 */
