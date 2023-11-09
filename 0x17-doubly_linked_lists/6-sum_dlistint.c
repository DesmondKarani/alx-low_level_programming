#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: the sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	/* initialize the sum to 0 */
	sum = 0;

	/* traverse the list and add the data of each node to the sum */
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	/* return the sum */
	return (sum);
}
