#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 *
 * Description: This function frees all the memory allocated for each node in
 * the linked lists at each array index, the memory for the array itself, and
 * finally the hash table structure.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	/* Iterate through the array and free the linked lists */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
