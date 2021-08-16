#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Function that  deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * Return: Data of the first element (int).
 * @head: Pointer to a pointer to the first element of pop_listint.
 */
int pop_listint(listint_t **head)
{
	listint_t *mvptr;
	int d;

	if (*head == NULL)
	{
		return (0);
	}
	mvptr = *head;
	d = (mvptr)->n;
	*head = (*head)->next;
	free(mvptr);

	return (d);
}
