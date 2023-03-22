#include <stddef.h>
/**
 * int_index - searches for an int in an arr of ints.
 * @array: arr of ints
 * @size: size of array
 * @cmp: pointer to func that compares
 * Return: if something is wrong : -1 otherwise index of first elem with cmp(index)!= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
