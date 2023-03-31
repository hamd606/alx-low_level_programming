#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begining of a list
 * @head: ptr to list to add a node to
 * @str: ptr to data to be added
 * Return: updated list and NULL at failure
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node;
	
	node  = malloc(sizeof(list_t *));
	
	if (str == NULL)
	{
		node->str = NULL;
		node->len = 0;
		node->next = *head;
	}
	
	if (new == NULL)
		return (NULL);

	node->next = *head;
	*head = node;
	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	
	node->len = i;
	
	return (node);
}
