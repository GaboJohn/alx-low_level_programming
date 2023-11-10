#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: Pointer to head
 * @index: Index of node
 *
 * Return: Pointer to nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; head != NULL; n++)
	{
		if (n == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
