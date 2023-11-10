#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node
 * @head: Pointer to pointer to head
 * @index: Index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *prev;
	unsigned int n = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	new = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(new);
		return (1);
	}
	while (new != NULL && n < index)
	{
		prev = new;
		new = new->next;
		n++;
	}
	if (new == NULL)
		return (-1);

	prev->next = new->next;
	if (new->next != NULL)
	{
		new->next->prev = prev;
	}

	free(new);

	return (1);
}
