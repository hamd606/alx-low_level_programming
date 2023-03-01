#include "main.h"

/**
 * *_strcat - joins two strings (src to dest)
 * @src: input 1
 * @dest: input 2
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++] != '\0')
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
