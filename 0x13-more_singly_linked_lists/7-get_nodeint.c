#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: pointer
 * @index: index of the node
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
