#include "main.h"

/**
 * _isdigit - a function that check for digit
 * @c: number should be check
 * Return:1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
