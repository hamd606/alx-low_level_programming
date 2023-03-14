#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _strdup - concatenate two strings
  * @str: string 1
  * @s2: string 2
  * Return: pointer to created memory space
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;

	char *p;

	len1 = 0;
	len2 = 0;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(1);
		p[0] = '\0';
	}

	else if (s1 == NULL || len1 == 0)
	{
		p = malloc(len2 + 1);
		for (i = 0; i < len2; i++)
			p[i] = s2[i];
		p[i + 1] = '\0';
	}

	else if (s2 == NULL || len2 ==0)
	{
		p = malloc(len1 + 1);
		for (i = 0; i < len1; i++)
			p[i] = s1[i];
		p[i + 1] = '\0';
	}

	else
	{
		p = malloc (len1 + len2 + 1);
		for (i = 0; i < len1; i++)
			p[i] = s1[i];
		for (i = len1; i < (len1 + len2); i++)
			p[i] = s2[i - len1];
		p[len1 + len2] = '\0';

	}

	return (p);

}
