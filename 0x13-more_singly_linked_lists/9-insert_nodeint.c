#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added.
 * @n: The integer for the new node.
 *
 * Return: NULL or the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *copy = *head;
	unsigned int node;

	node = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = copy;
		*head = temp;
		return (temp);
	}

	while (node < (idx - 1))
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
		node++;
	}

	temp->next = copy->next;
	copy->next = temp;

	return (temp);
}
