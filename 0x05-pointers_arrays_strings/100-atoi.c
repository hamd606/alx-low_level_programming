#include "main.h"

/**
 * _atoi - convert a number stored as a string int
 * @s: input char[]
 *Return: int value of the input
 */

int _atoi(char *s)
{
	int is_positive = 1;
	unsigned int result = 0;

	do {

		if (*s == '-')
			is_positive *= -1;

		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');

		else if (result > 0)
			break;

	} while (*s++);

	return (is_positive * result);
}
