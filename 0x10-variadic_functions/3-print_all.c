#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints char
 * @arg: list of arguments pointing to char
 */
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}

/**
 * print_int - printsint
 * @arg: list of arguments pointing to int
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

