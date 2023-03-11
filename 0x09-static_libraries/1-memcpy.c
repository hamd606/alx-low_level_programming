
#include "main.h"

/**
 * *_memcpy - copies memory area to another
 * @dest: area destination
 * @src: source
 * @n: size of source
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
