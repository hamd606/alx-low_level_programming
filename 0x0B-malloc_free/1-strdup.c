#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _strdup - the same as strdup, well almost it's a crappier version
  * @str: string to be copied
  * Return: pointer to created memory space
  */
char *_strdup(char *str)
{
	unsigned int i, len;

	char *p;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	if (len == 0)
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

	for (i = 0; i < len; i++)
		p[i] = str[i];

	p[i + 1] = '\0';

	return (p);

}
