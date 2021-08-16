#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Function  that frees a listint_t.
 * @head: Pointer to the head of the list to be freed.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{

	listint_t *mvptr;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		mvptr = *head;
		*head = mvptr->next;
		free(mvptr);
	}
	*head = NULL;
}
