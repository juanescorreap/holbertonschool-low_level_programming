#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - Function  that frees a listint_t list
 * Return: Void.
 * @head: pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *mvptr;

	while (head)
	{
	mvptr = head->next;
	free(head);
	head = mvptr;
	}

}
