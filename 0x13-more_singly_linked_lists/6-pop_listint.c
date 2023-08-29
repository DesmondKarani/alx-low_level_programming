#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list and
 * returns the head node's data.
 * @head: Double pointer to the head of the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
