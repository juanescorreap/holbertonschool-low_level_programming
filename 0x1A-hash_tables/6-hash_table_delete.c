#include "hash_tables.h"
/**
 * free_list - Function  that frees a hash_table_t list
 * @head: pointer to the head of the list to be freed
 * Return: Void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->value);
		free(head->key);
		free(head);
		head = tmp;
	}
}
/**
 * hash_table_delete -Function that deletes a hash table.
 * Return: Void
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
