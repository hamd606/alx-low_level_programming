#include "lists.h"

/**
 * free_dlistint - frees a dbl linked list
 * @head: ptr to list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
