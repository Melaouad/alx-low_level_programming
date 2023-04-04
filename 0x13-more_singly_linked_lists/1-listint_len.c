#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of nodes in the list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}

	return (node);
}
