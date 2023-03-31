#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: ptr to list's head
 * @str: data to be added in the node
 * Return: updated list and NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node;
	list_t *tmp;
	
	node  = malloc(sizeof(list_t));
	
	if (str == NULL)
		return (NULL);
	
	if (node == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = node;
		node->len = i;
		node->str = strdup(str);
		node->next = NULL;
	
		return (node);
	}
	
	tmp = *head;
	
	while (tmp->next != NULL)
		tmp = tmp->next;
	
	tmp->next = node;
	node->len = i;
	node->str = strdup(str);
	node->next = NULL;
	
	return (node);
}
