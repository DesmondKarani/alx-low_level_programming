#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 *
 * Description: This function prints the key/value pairs of the hash table
 * in the order they appear in the array, following the order of the linked
 * list within each array index. The format for each pair is {'key': 'value'}.
 * If ht is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int comma_flag = 0; /* Flag to control comma printing */

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma_flag = 1; /*Set flag after printing first pair */

			node = node->next;
		}
	}
	printf("}\n");
}
