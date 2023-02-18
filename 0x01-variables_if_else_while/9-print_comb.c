#include <stdio.h>

/**
* main - Check if a number is greater than 0
*
* Return: 1 if the number is positive. 0 otherwise
*/
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

