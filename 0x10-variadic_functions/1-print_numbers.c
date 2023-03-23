
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints nums passed as args
 * @separator: separator printed between nums
 * @n: number of args
 * @...: nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters_list;
	unsigned int i;

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters_list, int));

		if (i != (n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(parameters_list);
}
