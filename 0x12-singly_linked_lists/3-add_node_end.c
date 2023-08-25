#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
list_t *tmp;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->next = NULL;
new_node->len = len;

tmp = *head;
if (head == NULL)
{
	return (NULL);
}

if (*head == NULL)
{
*head = new_node;
return (*head);
}

while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_node;

return (*head);
}
