#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _strdup - concatenate two strings
  * @str: string 1
  * @s2: string 2
  * Return: pointer to created memory space
  */
char *str_concat(char *s1, char *s2);
{
	unsigned int i, len1, len2;

	char *p;

	len1 = 0;
	len2 = 0;

	if (str == NULL)
	{
		p = malloc(1);
		p[1] = '\0';
	}

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (len1 + len2 == 0)
	{
		p = malloc(1);
		p[1] = '\0';
	}

	else
	{
		p = malloc(len + 1);
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = str[i];

	for(i = len1; i < len2; i++)
		p[i] = s2[i - len1]

	p[i + 1] = '\0';

	return (p);

}
