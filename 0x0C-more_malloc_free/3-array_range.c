#include "main.h"
#include <stdlib.h>

/**
 * array_range - makes an array of integers from min to max
 * @min: smallest value in the array
 * @max: biggest  value in the array
 * Return: NULL if something is wrong a pointer otherwise
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

