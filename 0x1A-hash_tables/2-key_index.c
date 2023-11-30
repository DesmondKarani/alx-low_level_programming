#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table array.
 *
 * Description: This function uses the hash_djb2 function to calculate a hash
 *	value for the given key and then finds the index where this key
 *	should be stored in the hash table array by taking the modulus of the
 *	hash value and the size of the array.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
