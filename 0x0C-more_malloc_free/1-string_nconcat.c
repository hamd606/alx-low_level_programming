#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - joins two strings with n limi of bytes
 * @s1: str1
 * @s2: str2
 * @n: maximum number of bytes of str2 to add  to str1
 * Return: NULL if failure else a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len, i;

	len = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		result[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		result[len++] = s2[i];

	result[len] = '\0';

	return (result);
}
