#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked.
 *@h: Linked lists.
 *
 *Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
