#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linkeed list
 * @h: ptr to the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
