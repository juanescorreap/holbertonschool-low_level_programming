#include "hash_tables.h"
/**
 * hash_table_print - Function that that prints a hash table.
 * Return: Void
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	hash_node_t *tmp1 = NULL;
	unsigned long int i;
	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		tmp1 = tmp;
		while (tmp1 != NULL)
		{
			printf("%s", tmp1->key);
			printf("%s", tmp1->value);
			tmp1 = tmp1->next;
		}
	}
}