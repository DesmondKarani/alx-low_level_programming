#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be included in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	unsigned int len;

	/* Allocate memory for the new node */
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	for (len = 0; str[len]; len++)
		;

	/* Initialize new node fields */
	new_node->len = len;
	new_node->next = NULL;

	/* If list is empty, new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* Add new node at the end */
	last_node->next = new_node;

	return (new_node);
}
