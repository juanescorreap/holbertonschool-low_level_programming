#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new
 * node at the end of a listint_t list.
 * Return: A pointer to the first element of listint_t list.
 * @head: Pointer to a pointer to the first element of list_t.
 * @n: Element to be added at the end.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode;
	listint_t *mvptr;

	if (head == NULL)
	{
		return (NULL);
	}
	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
	{
		return (NULL);
	}
	nwnode->n = n;
	nwnode->next = NULL;

	if (*head != NULL)
	{
		mvptr = (*head);
		while (mvptr->next != NULL)
		{
			mvptr = mvptr->next;
		}
		mvptr->next = nwnode;

		return (mvptr->next);
	}
	*head = nwnode;

	return (*head);
}
