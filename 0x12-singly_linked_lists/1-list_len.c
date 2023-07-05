#include "lists.h"

/**
 * list_len - a function that returns number of elements.
 *@h: singly linked list.
 *
 *Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numElem;

	numElem = 0;
	while (h != NULL)
	{
		h = h->next;
		numElem++;
	}
	return (numElem);
}
