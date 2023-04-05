#include "lists.h"
/**
 * sum_listint - sums up the data in list of structs
 * @head: head node
 * Return: result of the summation
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
