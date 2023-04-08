#include <stdlib.h>

/**
  * rev_string - reverses a string in it's place
  * @s: string to be reversed
  * Return: ptr to a reversed string
  */
char *rev_string(const char * s)
{
	char *str_reversed;
	int str_length, i, half;
	char tmp;
	int size;

	size = 0;

	while (s[size])
	{
		size++;
	}

	str_reversed = malloc(size);

	for (str_length = 0; s[str_length] != '\0'; str_length++)
		str_reversed[str_length] = '0';
	i = 0;
	half = str_length / 2;

	str_reversed[half] = s[half];
	while (half--)
	{
		tmp = s[str_length - i - 1];
		str_reversed[str_length - i - 1] = s[i];
		str_reversed[i] = tmp;
		i++;
	}
	return (str_reversed);

}

/**
  * power - returns base ** power
  * @base: base
  * @power: power
  * Return: base ** power
  */
int power(int base, int power)
{
	int result = 1;

	if (power == 0)
		return (1);

	while (power)
	{
		result = result * base;
		power--;
	}

	return (result);
}

/**
  * binary_to_uint - converts a bin stored in a string to unsigned int in base 10
  * @b: binary string
  * Return: string converted to unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	b = rev_string(b); /* reverses the string to facilitate index calculations */

	while (b[i])
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
		result = result + (power(2, i) * (b[i] - '0'));
		i++;
		}

		else
			return (0);
	}

	free((void *) b);

	return (result);
}
