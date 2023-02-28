#include "main.h"

/**
 * rev_string - reverrses a string
 * @s: target input
 * Return: none
 */

void rev_string(char *s)
{
	int str_lenght, i, half;
	char tmp;

	for (str_lenght = 0; s[str_length] != '\0'; str_length++)
		;
	i = 0;
	half = str_length / 2;

	while (half--)
	{
		tmp = s[str_length - i - 1];
		s[str_length - i - 1] = s[i];
		s[i] = tmp;
		i++;

	}

}
