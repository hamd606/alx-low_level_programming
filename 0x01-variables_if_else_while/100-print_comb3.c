#include <stdio.h>

/**
* main - Check if a number is greater than 0
*
* Return: 1 if the number is positive. 0 otherwise
*/
int main(void)
{
	int n;
	int n2;
	int hitit;

	hitit = 0;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (n2 = '0' ; n2 <= '9' ; n2++)
		{
			if (n2 != n)
			{
				putchar(n);
				putchar(n2);

				if (n2 == '8' && n == '9')
				{
					hitit  = 1;
				}

				if (hitit == 0)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

