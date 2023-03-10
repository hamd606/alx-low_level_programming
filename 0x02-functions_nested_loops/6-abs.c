#include "main.h"

/**
 * _abs - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On false 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else
		return (n * (-1));
}
