#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - reserves memory with  malloc(input)
 * @b: bytes to be allocated
 * Return: pointer to the allocated bytes
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
