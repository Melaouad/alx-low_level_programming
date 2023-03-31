#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: inut list_t list.
 * Return: number of elemens.
 **/

size_t list_len(const list_t *h)
{
	const list_t *holder;
	unsigned int nnodes;

	nnodes = 0;

	holder = h;
	while (holder)
	{
		nnodes++;
		holder = holder->next;
	}
	return (nnodes);
}
