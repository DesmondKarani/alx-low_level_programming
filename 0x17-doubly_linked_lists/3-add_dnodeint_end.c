#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	/* allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* assign data to the new node */
	new->n = n;
	new->next = NULL;

	/* if the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* traverse the list to find the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* link the new node to the last node */
	last->next = new;
	new->prev = last;

	return (new);
}
