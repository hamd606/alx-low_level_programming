#include "main.h"

/**
 *  _strchr - finds a char in a str
 *  @s: input str
 *  @c: input char
 *  Return: if found a pointer to first place found and '\0' otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
