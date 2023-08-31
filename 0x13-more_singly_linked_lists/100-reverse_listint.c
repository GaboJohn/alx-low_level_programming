#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: header pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;
	listint_t *prev = NULL;

	while (current)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;

	return (*head);
}
