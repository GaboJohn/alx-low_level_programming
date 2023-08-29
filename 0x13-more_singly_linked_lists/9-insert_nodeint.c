#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node
 * @head: header pointer
 * @idx: where the new node should be added
 * @n: data to be inserted
 * Return: address of new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;

	for (x = 0; tmp; x++)
	{
		if (x == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);

}
