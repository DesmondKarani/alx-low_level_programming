#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Description: This function adds an element to the hash table.
 *	In case of collision, it adds the new node at the beginning
 *	of the list.
 *	The value is duplicated before insertion,
 *	and the key must be a valid string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Calculate index using the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Duplicate key and value */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		if (new_node->key)
			free(new_node->key);
		if (new_node->value)
			free(new_node->value);
		free(new_node);
		return (0);
	}

	/* Handle collision */
	current_node = ht->array[index];
	if (current_node != NULL)
	{
		new_node->next = current_node;
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[index] = new_node;
	return (1);
}
