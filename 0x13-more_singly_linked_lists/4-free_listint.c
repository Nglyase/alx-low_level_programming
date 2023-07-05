#include "lists.h"
/**
 * free_listint - frees memory allocated to list.
 *@head: points to the first node.
 *Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
