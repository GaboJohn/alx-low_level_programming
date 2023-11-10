#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer to the pointer to the head
 * @idx: Index where the new node should be added
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	new = *h;
	while (new != NULL && x < idx - 1)
	{
		new = new->next;
		x++;
	}
	if (new == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = new->next;
	node->prev = new;

	if (new->next != NULL)
		new->next->prev = node;

	new->next = node;

	return (node);
}
