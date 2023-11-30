#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key being searched for.
 *
 * Description: This function searches for the key in the hash table and
 *	returns the corresponding value if found.
 *
 * Return: The value associated with the element, or NULL if key couldn't
 *	be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			/* Return the value if key is found */
			return (node->value);
		node = node->next;
	}
	return (NULL); /* Return NULL if key is not found */
}

