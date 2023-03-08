#include "main.h"

/**
 * _strlen_recursion - counts the length of a string recursevly
 * @s: input srt
 *
 * Return: size of str.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
