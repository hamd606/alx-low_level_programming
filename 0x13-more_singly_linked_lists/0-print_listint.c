#include <stdio.h>
#include "lists.h"

/**
  * print_int - prints an int using _putchar
  * @n: number to be printed
  *
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
 
	if (n/10)
		print_int(n/10);
 
	_putchar(n%10 + '0');
}
*/

/**
 * print_list - prints all the element of a list_t object
 * @h: struct ptr to the passed list_t
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}

	return (i);
}
