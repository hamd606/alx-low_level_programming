#include "main.h"

/**
 * _strpbrk - finds first n  in the str s of any of the bytes in the str accept
 * @s: input string to be searched
 * @accept: target bytes
 * Return: if found a pointer to result and null otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
