#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;         /* Save current node */
		head = head->next;  /* Move to the next node */
		free(tmp->str);     /* Free the duplicated string */
		free(tmp);          /* Free the current node */
	}
}
