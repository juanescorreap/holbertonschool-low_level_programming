#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	entry = malloc(sizeof(entry) * 1 );
	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;

	return(entry);
}
