#include "lists.h"

/**
 * get_nodeint_at_index - gets the address of node atindex
 * @head: head node
 * @index: index
 * Return: ptr to node at index index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (0);
}
