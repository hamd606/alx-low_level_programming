#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list head
 * Return: number of printed nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
