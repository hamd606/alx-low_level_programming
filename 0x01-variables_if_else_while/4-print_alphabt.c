#include <stdio.h>

/**
 * main - Check if a number is greater than 0
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 97)
			if (ch != 113)
				putchar(ch);
	}

	putchar('\n');

	return (0);
}
