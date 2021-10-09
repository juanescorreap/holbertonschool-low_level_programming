#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key.
 * Return: Index of the given key
 * @key: key to be searched
 * @size: size of the hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ID = 0;
	unsigned long int index = 0;

	ID = hash_djb2(key);
	index = (ID % size);
	return (index);
}
