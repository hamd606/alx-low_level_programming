#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of arithmetic ops
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int  argc, char *argv[])
{
	int b;
	b = argc - 0;

	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
