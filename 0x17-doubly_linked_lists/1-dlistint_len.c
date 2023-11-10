#include "lists.h"

/**
 * dlistint_len - Returns number of elements
 * @h: Pointer to head
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t y = 0;

	while (h != NULL)
	{
		y++;
		h = h->next;
	}
	return (y);
}
