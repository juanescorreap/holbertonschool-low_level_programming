#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - Function that  adds a new
 * node at the beginning of a list_t list.
 * Return: A pointer to the firts element of listint_t list.
 * @head: Pointer to a pointer to the first element of list_t
 * @n: Element to be added at the begenning.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwstr;

	nwstr = malloc(sizeof(listint_t));
	if (nwstr == NULL)
	{
		exit(-1);
	}
	nwstr->n = n;
	nwstr->next = (*head);

	(*head) = nwstr;

	return (*head);
}
