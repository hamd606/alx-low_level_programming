#include <stdio.h>

/**
* main - Check if a number is greater than 0
*
* Return: 1 if the number is positive. 0 otherwise
*/
int main(void)
{
	int i, n;
	int hitit;

	hitit = 0;

	for (n = 1 ; n < 99 ; n++)
	{
		for (i = n ; ;)
		{
			if  (i / 10 % 10 > i % 10)
				break;
			i = i / 10;
			if (i == 0)
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');

				if (n / 10 + '0' == '8' && n % 10 + '0' == '9')
				{
					hitit  = 1;
				}

				if (hitit == 0)
				{
					putchar(',');
					putchar(' ');
				}

				break;
			}
		}
	}

	putchar('\n');

	return (0);
}

