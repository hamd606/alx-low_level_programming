#include "main.h"

int _calcul_sqrt(int num, int r);
int _sqrt_recursion(int n);

/**
 * root - finds the sqrt of a number
 * @val: number to look for
 * @p: the base
 * Return: root if num have natural square, othercase -1
 */
int root(int val, int p)
{
	if ((p * p) == val)
		return (p);

	if (p == val / 2)
		return (-1);

	return (root(val, (p + 1)));
}

/**
 * _sqrt_recursion - return sqrt of n
 * @n: input n
 * Return: 1 if natural sqrt else -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (root(n, i));
}
