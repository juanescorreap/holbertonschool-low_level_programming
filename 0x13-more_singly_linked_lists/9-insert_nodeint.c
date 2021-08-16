#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts
 * a new node at a given position.
 * Return: the address of the new node, or NULL if it failed.
 * @head: pointer to a pointer to the first element of list_t
 * @idx:  index of the list where
 * the new node should be added. Index starts at 0.
 * @n: data of the newly added node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nwnode;
	listint_t *mvptr;
	unsigned int j = 0;

	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
	{
		return (NULL);
	}
	nwnode->n = n;
	if (idx == 0)
	{
		nwnode->next = (*head);
		*head = nwnode;
		return (nwnode);
	}
	nwnode->next = NULL;
	mvptr = *head;
	while (mvptr->next && j < (idx - 1))
	{
		mvptr = mvptr->next;
		j++;
	}
	if (j < (idx - 1))
	{
		return (NULL);
	}
	nwnode->next = mvptr->next;
	mvptr->next = nwnode;
	return (nwnode);
}
