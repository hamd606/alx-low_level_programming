#include "lists.h"

/**
 * dlistint_len - returns the nodes count in a doubly linked list
 * @h: pointer to the list head
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
