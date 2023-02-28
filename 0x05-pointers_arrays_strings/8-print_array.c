
#include "main.h"
#include <stdio.h>

/**
 * print_array - print n-th elements of an int array
 * @a: pointer to int[n]
 * @n: size of *a ref
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
