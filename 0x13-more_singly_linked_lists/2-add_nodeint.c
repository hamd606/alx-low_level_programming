#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a list
 * @head: ptr to list to add a node to
 * @str: ptr to data to be added
 * Return: updated list and NULL at failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node  = malloc(sizeof(listint_t *));

	if (head == NULL)
	{
		return (0);
	}
	
	if (node == 0)
	{
		return (0);
	}

	node->n = n;
	node->next = *head;
	*head = node;


	return (node);
}
