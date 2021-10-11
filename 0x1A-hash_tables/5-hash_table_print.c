#include "hash_tables.h"
/**
 * hash_table_print - Function that that prints a hash table.
 * Return: Void
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	int a = 0;
	unsigned long int i;
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
			if(a == 1)
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