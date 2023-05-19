#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index n in a doubly linked list
 * @head: ptr to list head
 * @index: index of the searched node
 * Return: ptr to node if ok and NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
