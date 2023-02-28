#include "main.h"

/** 
 * _strlen - return len of str
 * @s: pointer to input
 * Return: int len of str
 */
int _strlen(char *s)
{
	int i;

	i= 0;

	while (s[i]) 
		i++;
	return (i);
}
