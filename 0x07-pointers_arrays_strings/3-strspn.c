#include "main.h"

/**
 *  _strspn - returns the number of bytes in the initial segment of s which consist only of bytes from accept
 *  @s: input
 *  @accept: bytes that are matched 
 *  Return: size of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				size++;
				break;
			}
			else if (accept[i + 1] == 0)
				return (size);
		}
		s++;
	}
	return (size);
}
