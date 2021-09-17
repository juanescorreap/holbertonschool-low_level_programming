#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the first dlistint_t element
 * Return: Sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
			sum = sum + current->n;
		}
		return (sum);
	}
}
