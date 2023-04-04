#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer to the list to be free'd
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while(head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
