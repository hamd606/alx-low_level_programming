#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all of input args but n
  * @n: number of args
  * Return: sum of all args
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameters_list;
	unsigned int i, result = 0;

	if (n == 0)
		return (0);

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
		result += va_arg(parameters_list, int);

	return (result);
}
