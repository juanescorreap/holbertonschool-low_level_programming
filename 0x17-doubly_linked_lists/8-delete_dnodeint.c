#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes
 * the node at index index of a dlistint_t linked list
 * @head: Double pointer to the first dlistint_t element
 * @index: Position in which the node is to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *delete;
	unsigned int count = 0;

	if (!head)
	{
		return (-1);
	}
	if (index == 0 && current->next != NULL)
	{
		delete = current;
		current->next->prev = NULL;
		*head = current->next;
		free(delete);
		return (1);
	}
	else if (index == 0)
	{
		free(head);
		return (1);
	}
		while (current->next)
	{
		if (count == index)
		{
			delete = current;
			current->next->prev = current->prev;
			current->prev->next = current->next;
		}
		current = current->next;
		count = count + 1;
	}
	if (count == index)
	{
		current->prev->next = NULL;
		delete = current;
	}
	if (index > count)
		return (-1);
	free(delete);
	return (1);
}
