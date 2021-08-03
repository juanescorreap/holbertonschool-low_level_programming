#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to a pointer to the first element of list_t
 * Return: sum of all the data of the linked list
 */
int sum_listint(listint_t *head)
{
	int j = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next)
	{
		j = j + head->n;
		head = head->next;
	}
	j = j + head->n;
	return (j);
}
