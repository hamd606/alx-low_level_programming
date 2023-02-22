#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - adds two numbers
 * @n: first term
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98");
	}

	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}

		printf("98");

	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}

		printf("98");

	}

	printf("\n");

}
