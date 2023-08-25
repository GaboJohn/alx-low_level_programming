#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to the head
 * @str: new string
 *
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;

	else
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len;
	*head = new_node;

return (*head);
}
