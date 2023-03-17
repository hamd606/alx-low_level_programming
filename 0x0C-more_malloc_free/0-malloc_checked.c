#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - reserves memory with  malloc(input)
 * @b: bytes to be allocated
 * Return: pointer to the allocated bytes
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = NULL;

	if (b < INT_MAX)
		p = malloc(b);

	else
	{
		if (p == NULL)
		{
			exit(98);
		}
	}

	return (p);
}
