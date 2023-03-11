
#include "main.h"

/**
 * _strstr - searche for a substring and return its adress
 * @haystack: input string
 * @needle: target
 * Return: if found a pointer to first occurence null otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
