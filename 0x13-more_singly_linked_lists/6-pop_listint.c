#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: header pointer
 * Return: int
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;

	current = *head;
	*head = (*head)->next;
	free(current);
	return (n);
}
