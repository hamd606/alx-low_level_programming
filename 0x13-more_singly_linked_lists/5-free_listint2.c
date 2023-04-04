#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to the list to be free'd
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while(head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}

	head = NULL;
}
