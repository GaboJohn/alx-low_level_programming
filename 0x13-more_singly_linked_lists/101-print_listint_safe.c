#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - prints linked list
 * @head: pointer
 * Return: number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t nodes = 0;

if (!head)
return (0);

while (hare && hare->next)
{
	tortoise = tortoise->next;
	hare = hare->next->next;
	if (tortoise == hare)
	{
		do
	    {
		    nodes++;
		tortoise = tortoise->next;
}
while (tortoise != hare);
return (nodes);
}
}
return (0);
}
size_t print_listint_safe(const listint_t *hea)
{
size_t nodes = 0;
size_t loop_nodes = looped_listint_len(head);

while (head && (nodes < loop_nodes || !loop_nodes))
{
printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
nodes++;
}
if (loop_nodes)
{
printf("-> [%p] %d\n", (void *)head, head->n);
	nodes++;
}
return (nodes);
}
