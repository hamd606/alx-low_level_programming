#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the element of a list_t object
 * @h: struct ptr to the passed list_t
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}

	return (i);
}
