#include <stdlib.h>
#include "main.h"

/**
  * _strlen - man strlen
  * @c: str
  * Return: len(c)
  */
int _strlen(char *c)
{
	int i;

	i = 0;

	if (c != NULL)
	{
		while (c[i])
			i++;
	}

	return (i);

}


/**
  * str_concat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to created memory space
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *p;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(1);
		if (p == NULL)
			return (NULL);
		p[0] = '\0';
	}
	else if (s1 == NULL || len1 == 0)
	{
		return (_strdup(s2));
	}
	else if (s2 == NULL || len2 == 0)
	{
		return (_strdup(s1));
	}
	else
	{
		p = malloc(len1 + len2 + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			p[i] = s1[i];
		for (i = len1; i < (len1 + len2); i++)
			p[i] = s2[i - len1];
		p[len1 + len2] = '\0';
	}
	return (p);
}
