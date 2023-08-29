#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
