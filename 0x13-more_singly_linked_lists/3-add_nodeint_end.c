#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the begining of a list
 * @head: ptr to list to add a node to
 * @n: node's data
 * Return: updated list and NULL at failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	node  = malloc(sizeof(listint_t *));

	if (head == NULL)
	{
		return (NULL);
	}

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	else
	{
		tmp = *head;

		while(tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = node;
		return (tmp);
	}

}
