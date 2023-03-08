#include "main.h"

/**
 * _pow_recursion - x**y
 * @n: input ints
 *
 * Return: x**x
 */
int _pow_recursion(int x, int y)
{
	int a = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	a *= _pow_recursion(x, y - 1);

	return (a);
}
