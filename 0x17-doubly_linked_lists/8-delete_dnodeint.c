#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t linked list
 * @head: pointer to pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int i;

	/* if the list is empty, return -1 */
	if (*head == NULL)
		return (-1);

	/* traverse the list until the index or the end is reached */
	current = *head;
	i = 0;
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	/* if the index is out of range, return -1 */
	if (i != index)
		return (-1);

	/* get the next node of the current node */
	next = current->next;

	/* if the current node is the head, make the next node the new head */
	if (current == *head)
		*head = next;

	/* unlink the current node from the list */
	if (prev != NULL)
		prev->next = next;
	if (next != NULL)
		next->prev = prev;

	/* free the current node */
	free(current);

	return (1);
}
