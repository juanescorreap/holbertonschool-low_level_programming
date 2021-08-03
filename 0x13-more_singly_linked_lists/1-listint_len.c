#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to a list_t element
 * Return: A size_t value for listint_t
 */
size_t listint_len(const listint_t *h)
{
size_t index = 0;

while (h)
{
	h = h->next;
	index = index + 1;
}
return (index);
}
