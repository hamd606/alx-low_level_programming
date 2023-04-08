#include <stdlib.h>
/**
  * rev_string - reverses a string in it's place
  * @s: string to be reversed
  */
char *rev_string(const char *s)
{
	char *str_reversed;
	int str_length, i, half;
	char tmp;

	str_reversed = malloc(sizeof(s));

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
	int result;

	if (power == 0)
		return (1);
	result = 1;
	
	while (power)
	{
		result = result * base; 
		power--;
	}
	
	return (result);
}

/**
  * binary_to_uint - converts a bin stored in a string to unsigned int in base 10
  * @c: binary string
  * Return: string converted to unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result;

	result = 1;

	b = rev_string(b); /* Reversing the string to match indexes while looping */

	while (b[i])
	{
		result = result + (power(2, i) * (b[i] - '0'));
		i++;
	}

	return (result);
}
