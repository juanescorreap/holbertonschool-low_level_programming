#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer to a list_t element
 * Return: A size_t value for list_t
 */
size_t print_list(const list_t *h)
{
	size_t index;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{

			printf("[%d] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
		index = index + 1;
	}
	return (index);
}
