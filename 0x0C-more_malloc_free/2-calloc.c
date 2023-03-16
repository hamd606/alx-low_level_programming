#include "main.h"
#include <stdlib.h>

/**
 * _calloc - the same as calloc
 * @nmemb: n elements
 * @size: element's size
 * Return: NULL if something is wrong a pointer otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *place_holder;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	place_holder = p;

	for (i = 0; i < (size * nmemb); i++)
		place_holder[i] = '\0';

	return (p);
}
