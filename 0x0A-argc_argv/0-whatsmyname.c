#include "main.h"
#include <stdio.h>

/**
  * main - code entry point print prog name
  * @argc: number of argument passed
  * @argv: array of args passed
  *Return: 0
  */
int main(int argc, char* argv[])
{
	int i;

	i = 5 + argc;
	i++;

	printf("%s\n", argv[0]);

	return (0);

}
