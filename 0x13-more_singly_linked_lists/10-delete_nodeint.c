#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *copy = *head;
	unsigned int node;

	node = 0;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	while (node < (index - 1))
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
		node++;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
