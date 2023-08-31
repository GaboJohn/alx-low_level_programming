#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint *tmp, *curr = *h;
	size_t len = 0;

	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		len++;

		if (tmp >= *h)
			break;
		*h = tmp;
	}
	*h = (NULL);

	return (len);

}
