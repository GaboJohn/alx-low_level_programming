#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: header pointer
 * @index: index that should be deleted
 * Return: 1 else -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp, *prev, *current;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	prev = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (!prev->next)
			return (-1);
		prev = prev->next;
	}
	if (!prev->next)
		return (-1);

	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
