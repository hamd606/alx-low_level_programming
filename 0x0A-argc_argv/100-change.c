#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
  * cooins - return min number of change with coins 25 10 5 2 1
  * @input: intput
  * Return: number of coins
  */
int cooins(int input)
{

	int coins, c25, c10, c5, c2, c1, rest;

	c25 = c10 = c5 = c2 = c1 = coins = rest = 0;

	c25 = input / 25;
	rest = input % 25;

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
	return (coins);

}

/**
 * main - prints argc passed from cmd
 * @argc: argc main
 * @argv: args passed to the prog
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int input;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);

	if (input < 1)
	{
		printf("0\n");
		return (1);
	}

	printf("%d\n", cooins(input));

	return (0);
}
