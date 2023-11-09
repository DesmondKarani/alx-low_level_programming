#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer for the new node to contain.
 *
 * Description: Allocates memory for a new node, sets its data part to 'n',
 * and its next part to point to the current head of the list. If the list
 * is not empty, it adjusts the previous head's previous pointer to point
 * to the new node. The new node's previous part is NULL as it will be
 * the new head of the list. The head is then updated to point to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	/* Set the data of the new node */
	new_node->n = n;
	new_node->prev = NULL; /* New node will be at the head */
	new_node->next = *head; /* Next element is the current head */

	/* If the list is not empty, set previous head's previous pointer */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Move the head to point to the new node */
	*head = new_node;

	return (new_node);
}
