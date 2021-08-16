#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns
 * the nth node of a listint_t linked list.
 * Return: A pointer to the firts element of listint_t list.
 * @head: pointer to a pointer to the first element of list_t.
 * @index:  index of the node, starting at 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head && j < index)
	{
		head = head->next;
		j++;
	}
	return (head);
}
