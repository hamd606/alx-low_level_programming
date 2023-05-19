#include "lists.h"

/**
 * add_dnodeint - adds a new node at the first ofa doubly linked list
 * @head: double ptr to list head
 * @n: node data
 * Return: ptr to new node if success and NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
