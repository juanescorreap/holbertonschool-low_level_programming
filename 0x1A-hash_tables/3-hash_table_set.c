#include "hash_tables.h"
/**
 * create_node - Function that creates an
 * entry and assigns key and value
 * Return: Pointer to the entry, NULL if something fails
 * @cp_key: key to be added
 * @cp_value: value that goes with the key
 */
hash_node_t *create_node(char *cp_key, char *cp_value)
{
	hash_node_t *entry = NULL;

	entry = malloc(sizeof(hash_node_t *));
	if (entry == NULL)
	{
		return (NULL);
	}
	entry->key = cp_key;
	entry->value = cp_value;
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
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;
	char *cp_value = NULL;
	char *cp_key = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	cp_value = strdup(value);
	if (cp_value == NULL)
	{
		return (0);
	}
	cp_key = strdup(key);
	if (cp_key == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = cp_value;
			return (1);
		}
		tmp = tmp->next;
	}
	entry = create_node(cp_key, cp_value);
	if (entry == NULL)
	{
		return (0);
	}
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}
