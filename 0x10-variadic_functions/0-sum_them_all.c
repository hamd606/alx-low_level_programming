#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all of input args but n
  * @n: number of args
  * Return: sum of all args
  */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int result = 0;

	if (n == 0)
		return (0);

	else
	{
		for (i = 0; i < n; i++)
			result += i;
	}

	return (result);

}
