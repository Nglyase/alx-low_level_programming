#include "lists.h"

/**
 * print_list - prints all the elements of a given list
 *@h: the list
 *
 *Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t numElem;

	numElem = 0;

	for (numElem = 0; h != NULL; numElem++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (numElem);
}
