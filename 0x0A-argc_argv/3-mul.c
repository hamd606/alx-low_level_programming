#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplication of two args
 * @argc: argc main
 * @argv: args passed to the prog
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	
	int y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	else
	{

		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
}
