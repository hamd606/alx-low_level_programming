#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index of a dbl linked list
 * @h: double ptr to list
 * @idx: index to be isterting the node at
 * @n: data to be inserted
 * Return: ptr to the new node if ok and NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next->prev = new_node;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
