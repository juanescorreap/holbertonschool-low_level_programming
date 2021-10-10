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
	hash_node_t *tmp = NULL;
	hash_node_t *entry = NULL;
	char *cp_value;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	cp_value = strdup(value);
	if (cp_value == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hs_allocate(key, cp_value);
		return (1);
	}
	else if (strcmp(entry->key, key) == 0)
	{
		free(entry->value);
		entry->value = cp_value;
		return (1);
	}
	else
	{
		tmp = ht->array[index];
		ht->array[index] = hs_allocate(key, cp_value);
		entry->next = tmp;
		return (1);
	}
	return (0);
}
