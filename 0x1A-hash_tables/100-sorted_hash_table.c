#include "hash_tables.h"
/**
 * hash_table_create - Function
 * that creates a hash table.
 * Return: pointer to the newly created
 * hash table.
 * @size: size of the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = malloc(sizeof(shash_table_t *) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
/**
 * create_node - Function that creates an
 * entry and assigns key and value
 * Return: Pointer to the entry, NULL if something fails
 * @cp_key: key to be added
 * @cp_value: value that goes with the key
 */
shash_node_t *create_node_1(char *cp_key, char *cp_value)
{
	shash_node_t *entry = NULL;

	entry = malloc(sizeof(shash_node_t *));
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *entry = NULL;
	shash_node_t *tmp = NULL;
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
	entry = create_node_1(cp_key, cp_value);
	if (entry == NULL)
	{
		return (0);
	}
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}
/**
 * hash_table_get - Function that retrieves
 * a value associated with a key.
 * Return: Value associated with the element,
 * or NULL if key couldn’t be found
 * @key: key to look up
 * @ht: Hash table
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * hash_table_print - Function that that prints a hash table.
 * Return: Void
 * @ht: Hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	unsigned long int i;
	int a = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (a == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			a = 1;

			tmp = tmp->next;
		}
	}
	printf("}\n");
}
