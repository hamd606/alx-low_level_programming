#include "lists.h"

/**
 * sum_dlistint - returns the sum of data ints in a doubly linked list
 * @head: ptr to list head
 * Return: sum of the data ints
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
