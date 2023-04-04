#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer
 * Return: Null or The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}
