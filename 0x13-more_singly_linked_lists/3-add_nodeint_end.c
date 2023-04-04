#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer
 * @n: an integer
 *
 * Return:  NULL or the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = temp;
	}

	return (*head);
}
