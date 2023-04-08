#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: ptr input  (unsigned int)
 * @index: set index  (unsigned int)
 * Return: 1 on succes -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 64)
		return (-1);

	i <<= index;
	*n |= i;

	return (1);
}
