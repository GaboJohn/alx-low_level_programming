#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: header pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	*head = curr->next;
	curr->next = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = curr;
		curr = *head;
		if (next_node == NULL)
			return (*head);
		*head = next_node;
	}
	if (*head == NULL)
	{
		*head = curr;
	return (*head);
	}
	return (NULL);
}
