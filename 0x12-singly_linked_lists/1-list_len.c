nclude "lists.h"

/**
 * list_len - counts the number of nodes in a linkeed list
 * @h: ptr to the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		i++;
		h = h->next;
	}
	
	return (i);
}
