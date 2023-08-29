#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;/* Store the next node */
		(*head)->next = prev;/* Reverse current node's pointer */
		prev = *head;/* Move pointers one position ahead */
		*head = next_node;
	}

	*head = prev;/* Reset head pointer to the new start */

	return (*head);
}
