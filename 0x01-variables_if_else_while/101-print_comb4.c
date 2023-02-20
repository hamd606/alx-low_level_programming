#include <stdio.h>


/**
 * main - Check if a number is greater than 0
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int main(void)
{
	int i, j, k, result;
	int hitit;

	hitit = 0;

	for (i = 0; i <= 7; i++)
	{
    		for (j = i+1; j <= 8; j++)
    		{
        		for (k = j+1; k <= 9; k++)
        		{
            			putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (k != 9 && j != 8 && i != 7);
				{
					putchar(',');
					putchar(' ');
				}
        		}
    		}
	}
	
	return (0);

}
