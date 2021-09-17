#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a
 * new node at a given position.
 * @h: Double pointer to the first dlistint_t element
 * @idx: Position in which the new node is to be added
 * @n: Value to be stored in the new node
 * Return: Addres of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (!h)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		count = count + 1;
	}
	if (count == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
