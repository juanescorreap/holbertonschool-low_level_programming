#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  function that prints
 * all the elements of a listint_t list.
 * @h: Pointer to the first element of list_t element
 * Return: A size_t value for list_t
 */
size_t print_listint(const listint_t *h)
{
int index = 0;

while (h)
{

printf("%d", h->n);
printf("\n");
h = h->next;
index = index + 1;
}
		return (index);
}
