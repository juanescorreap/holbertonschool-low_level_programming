#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at the
 * index of a listint_t linked list
 * Return: 1 if it succeeded, -1 if it failed.
 * @head: Pointer to the first element of listint_t.
 * @index: Index of the node that should be deleted. Index starts at 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mvptr;
	listint_t *aftrptr;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	mvptr = *head;
	if (index == 0)
	{
		*head = mvptr->next;
		free(mvptr);
		return (1);
	}
	while (mvptr->next && j < index - 1)
	{
		mvptr = mvptr->next;
		j++;
	}
	if (j < (index - 1))
	{
		return (-1);
	}
	if (mvptr == NULL || mvptr->next == NULL)
		return (-1);

	aftrptr = mvptr->next->next;
	free(mvptr->next);
	mvptr->next = aftrptr;

	return (1);
}
