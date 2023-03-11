#include <stdio.h>
#include "main.h"

/**
 * main - prints argc passed from cmd
 * @argc: argc main 
 * @argv: args passed to the prog
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
		printf("%d\n", argc - 1);
	
	else
	{
		printf("%s", argv[0]);
		printf("Something is wrong as hell");
	}
	return (0);
}
