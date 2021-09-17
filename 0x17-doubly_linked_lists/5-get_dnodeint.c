#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a dlistint_t linked list.
 * @head: Double pointer to the first dlistint_t element
 * @index: Index of the value to be returned
 * Return: Value of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	if (head != NULL)
	{
		while (count + 1 <= index)
		{
			current = current->next;
			count = count + 1;
		}
		return (current);
	}
	else
	{
		return (NULL);
	}
}
