#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints argc passed from cmd
 * @argc: argc main
 * @argv: args passed to the prog
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int input;

	int coins;

	int c25;
	
	int c10;
	
	int c5;
	
	int c2;
	
	int c1;

	int rest;
	
	c25 = argc -argc;

	c25 = 0;
	c10 = 0;
	c5 = 0;
	c2 = 0;
	c1 = 0;

	coins = 0;
	rest = 0;

	input = atoi(argv[1]);

	c25 = input / 25;
	rest = input % 25;

	if (input < 1)
	{
		printf("0\n");
		return (1);
	}

	if (rest != 0)
	{
		c10 = rest / 10;
		rest = rest % 10;

		if (rest != 0)
		{
			c5 = rest / 5;
			rest = rest % 5;

			if (rest != 0)
			{
				c2 = rest / 2;
				rest = rest % 2;

				if (rest != 0)
				{
					c1 = rest;
				}
			}
		}
	}

	coins = c25 + c10 + c5 + c2 + c1;
	printf("%d\n", coins);
	
	return (0);
}
