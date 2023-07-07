#include "lists.h"
/**
 * sum_listint - returns the sum of data(n)
 * @head: The head node
 * Return: @cnt is the sum of n data
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
