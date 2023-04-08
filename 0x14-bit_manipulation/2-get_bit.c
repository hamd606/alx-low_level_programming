#include "main.h"

/**
 * get_bit - gets the bit of an int at index
 * @n: int input
 * @index: index searched for
 * Return: bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	/* if index is bigger than int's binary representation */
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
