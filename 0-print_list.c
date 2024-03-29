#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the element of a list_t object
 * @h: struct ptr to the passed list_t
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		h = h->next;
		i++;
	}
	
	return (i);
}
