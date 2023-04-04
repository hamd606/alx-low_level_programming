#include "lists.h"
/**
 * pop_listint - pops a node from listint_t
 * @head: head node
 * Return: node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = tmp;
	return (n);
}
