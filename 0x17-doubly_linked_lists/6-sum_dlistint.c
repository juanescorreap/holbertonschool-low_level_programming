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

	if (!head)
	{
		return (0);
	}
	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			sum = sum + head->n;
		}
		return (sum);
	}
}
