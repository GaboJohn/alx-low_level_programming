#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head
 *
 * Return: Sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
