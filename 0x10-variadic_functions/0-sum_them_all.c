#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all of input args but n
  * @n: number of args
  * Return: sum of all args
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args_list;

	va_start(args_list, n);

	if (n == 0)
		return (0);

	else
	{
		for (i = 0; i < n; i++)
			result += va_arg(args_list, int);
	}

	return (result);

}
