#include "hash_tables.h"
/**
 * hs_allocate - Function that adds an
 * element to the hash table.
 * Return: 1 if it succeeded, 0 otherwise
 * @key: key to be added
 * @value: value that goes with the key
 *
 */
hash_node_t *hs_allocate(const char *key, const char *value)
{
	hash_node_t *entry = NULL;

	entry = malloc(sizeof(hash_node_t *));

	entry->key = (char *)key;
	entry->value = (char *)value;
	entry->next = NULL;

	return (entry);
}

/**
 * hash_table_set - Function that adds an
 * element to the hash table.
 * Return: 1 if it succeeded, 0 otherwise
 * @key: key to be added
 * @value: value that goes with the key
 * @ht: Pointer to hash table
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	/*hash_node_t *tmp = NULL;*/
	hash_node_t *entry = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hs_allocate(key, value);
		write(2, "Print 1\n", 8);
		return (1);
	}
	while (entry != NULL)
	{

		if (strcmp(entry->key, key) == 0)
		{
			entry->value = (char *)value;
			return (1);
		}

		entry->next = hs_allocate(key, value);
	}
	return (1);
}
