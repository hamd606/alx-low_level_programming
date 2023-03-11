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

	int result;
	int i;
	int j;

	result = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

		/*checking for non digit chars*/
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}

				j++;
			}
			/* if prigram reaches here it means no non diigts were detected*/

		}

		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}

		printf("%d\n", result);

		return (0);
}
