#include "hash_tables.h"
/**
 * key_index - Function that returns the index of a key.
 * Return: Index of the given key
 * @key: key to be searched
 * @size: size of the hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
