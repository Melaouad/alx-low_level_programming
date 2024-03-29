#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer
 * @index: an index of the node to locate
 * Return: NULL or the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		node++;
	}

	return (head);
}
