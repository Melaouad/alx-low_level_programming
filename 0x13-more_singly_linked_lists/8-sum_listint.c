#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer
 * Return: Null or the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
