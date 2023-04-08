/**
  * rev_string - reverses a string in it's place
  * @s: string to be reversed
  */
void rev_string(char *s)
{
	int str_length, i, half;
	char tmp;

	for (str_length = 0; s[str_length] != '\0'; str_length++)
		;
	i = 0;
	half = str_length / 2;

	while (half--)
	{
		tmp = s[str_length - i - 1];
		s[str_length - i - 1] = s[i];
		s[i] = tmp;
		i++;

	}

}

/**
  * power - returns base ** power
  * @base: base
  * @power: power
  * Return: base ** power
  */
int power(int base, int power)
{
	if (power == 0)
		return (1);
	int result = 1;
	
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
	unsigned int result = 0;

	rev_string(b); /* Reversing the string to match indexes while looping */

	while (b[i])
	{
		result = result + (power(2, i) * (b[i] - '0'));
		i++;
	}

	return (result);
}
