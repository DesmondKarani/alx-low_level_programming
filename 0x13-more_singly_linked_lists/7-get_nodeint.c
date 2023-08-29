#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		count++;
		head = head->next;
	}

	return (NULL);
}
