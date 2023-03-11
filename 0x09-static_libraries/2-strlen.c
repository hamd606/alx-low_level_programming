#include "main.h"

/**
 * _strlen - counts the length of a string recursevly
 * @s: input srt
 *
 * Return: size of str.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	if (*s)
	{
		i++;
		i += _strlen(s + 1);
	}

	return (i);
}
