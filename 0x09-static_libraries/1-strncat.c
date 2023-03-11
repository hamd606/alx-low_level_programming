
#include "main.h"

/**
 * _strncat - joins two strings
 * @dest: first half
 * @src: string to be added
 * @n: n bytes
 * Return: pointer to full string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int full_len;

	i = 0;
	full_len = 0;

	while (dest[i++] != '\0')
		full_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[full_len++] = src[i];
	return (dest);
}
