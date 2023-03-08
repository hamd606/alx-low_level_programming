#include "main.h"

/**
 * factorial - Returns the factorial of a int.
 * @n: input int
 *
 * Return: if n > 0, n! and if n < 0, - 1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	
	if (n>=1)
		return n * factorial(n - 1);

	else 
		return (-1);
	
}
