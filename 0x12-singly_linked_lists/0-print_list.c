#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: input list_t list.
 * Return: The number of nodes in h or null.
 */

size_t print_list(const list_t *h)
{
	size_t nnodes;

	nnodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nnodes++;
		h = h->next;
	}

	return (nnodes);
}
