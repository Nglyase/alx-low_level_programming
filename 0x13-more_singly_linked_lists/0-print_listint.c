#include "lists.h"

/**
 * print_listint - function prints elements of a linked list.
 *@h: The linked list.
 *
 *Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
