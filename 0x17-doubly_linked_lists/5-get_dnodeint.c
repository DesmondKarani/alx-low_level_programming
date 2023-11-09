#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 * Return: the node at the given index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	/* traverse the list until the index or the end is reached */
	current = head;
	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* return the node at the index, or NULL if it does not exist */
	return (current);
}
