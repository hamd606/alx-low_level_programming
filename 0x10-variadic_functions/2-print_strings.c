
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a serie of strings separated by a separator
 * @separator: separator
 * @n: # of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters_list;
	char *string;
	unsigned int i;

	va_start(parameters_list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(parameters_list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(parameters_list);
}
