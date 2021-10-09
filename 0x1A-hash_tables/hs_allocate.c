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

	entry = malloc(sizeof(hash_node_t*));

	entry->key = (char*)key;
	entry->value = (char*)value;
	entry->next = NULL;

	return(entry);
}
