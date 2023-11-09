#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *prev;
	unsigned int i;
	/* allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;/* assign data to the new node */
	/* if the index is 0, insert the new node at the beginning */
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	/* traverse the list until the index or the end is reached */
	current = *h;
	i = 0;
	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	/* if the index is out of range, return NULL */
	if (i != idx)
	{
		free(new);
		return (NULL);
	}
	/* insert the new node between prev and current */
	new->prev = prev;
	new->next = current;
	if (prev != NULL)
		prev->next = new;
	if (current != NULL)
		current->prev = new;
	return (new);
}
