#include "dog.h"
#include <stddef.h>
/**
  * print_dog - prints dog struct
  * @d: struct pointer
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("(nil)\n");
	}

	else
	{
		printf("Name : %s\nAge : %f\nOwner : %s\n", (*d).name, (*d).age, (*d).owner);
}
