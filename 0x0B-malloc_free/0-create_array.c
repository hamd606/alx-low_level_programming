#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
  * create_array - create a dinamic array of size size
  * @size: size of the array
  * @c: the char to initialize the block with
  * Return: pointer to the reserved memory bloc 
  */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size);
	
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}
