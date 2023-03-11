#include "main.h"

/**
 * _strcmp - compares 2 string
 * @s1: pointer to str 1
 * @s2: pointer to str 2
 * Return: abs(str1 - srt2)
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
