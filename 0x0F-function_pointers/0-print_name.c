#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
