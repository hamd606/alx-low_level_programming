#include <stdio.h>

/**
* main - Check if a number is greater than 0
*
* Return: 1 if the number is positive. 0 otherwise
*/
int main(void)
{
	int i, j;
	int hitit;

	hitit = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (hitit < 44)
			{
			putchar(',');
			putchar(' ');

			}
			hitit++;
		}
	}
	putchar('\n');

	return (0);
}
