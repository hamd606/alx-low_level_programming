#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _strdup - function that returns a pointer to a newly allocated space in memory copy of str
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

	while(str[len])
		len++;

	if (len == 0)
	{
		p = malloc(1);
		p[1] = '\0';
	}

	else
	{
		p = malloc(len);
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	return (p);

}
