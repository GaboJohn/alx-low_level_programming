#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
