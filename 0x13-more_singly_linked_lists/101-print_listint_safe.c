#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	if (!head)
		exit(98);

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		count++;

		if (slow == fast)/* Cycle detected */
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
	}
	/**
	 * If we exit the while loop, it means we have reached
	 * the end of a non-circular list
	 */
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}

	return (count);
}
