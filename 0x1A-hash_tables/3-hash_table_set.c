#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
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
	printf("Print 1");
	unsigned long int index;
	hash_node_t *tmp = NULL;
	hash_node_t *entry = NULL;
	printf("Print 2");
	if (ht == NULL || key == NULL || value == NULL|| *key == '\0' )
	{
		return(0);
	}
	index = key_index((unsigned char *)key, ht->size);
	printf("Print 3");
	entry = ht->array[index];
	printf("Print 4");
	if (entry == NULL)
	{
		printf("Print 5");
		ht->array[index] = hs_allocate(key, value);
	}
	printf("Print 6");
	while (entry != NULL)
	{
		printf("Print 7");
		if (strcmp(entry->key, key) == 0)
		{
			printf("Print 8");
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}
		printf("Print 9");
		tmp = entry;
		entry = tmp->next;
		printf("Print 10");
	}
	printf("Print 12");
	tmp->next = hs_allocate(key, value);
	printf("Print 13");
	return (1);
}