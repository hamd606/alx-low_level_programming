#include <stdio.h>

/**
 * main - code entry poinit
 *
 * Return: 0 hopefully
 */

int main(void)
{
	char charSize;
	int intSize;
	long int longintSize;
	long long int llongSiez;
	float floatSize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintSize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongSiez));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));

	return (0);

}
