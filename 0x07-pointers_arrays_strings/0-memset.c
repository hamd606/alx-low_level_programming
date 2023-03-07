#include "main.h"

/**
 * _memset -  fills the first n bytes s's *s with the const byte b
 * @s: pointer to the area to be filled
 * @b: constant byte
 * @n: n bytes to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
