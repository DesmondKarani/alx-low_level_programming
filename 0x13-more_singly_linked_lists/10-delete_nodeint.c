#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of listint_t linked list
 * @head: Double pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;
	listint_t *current = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (count = 0; current && count < index - 1; count++)
		current = current->next;

	if (!current || !current->next)
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
