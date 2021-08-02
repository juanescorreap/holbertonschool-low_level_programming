#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Function  that frees a list_t list
 * @head: pointer to the head of the list to be freed
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *mvptr;
	while(head)
	{
	mvptr = head->next;
	free(head);
	head = mvptr;
	}

}