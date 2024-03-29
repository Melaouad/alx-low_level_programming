#include "lists.h"
/**
 * add_node - adds a new node at the beginning of head node.
 * @head: input list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
