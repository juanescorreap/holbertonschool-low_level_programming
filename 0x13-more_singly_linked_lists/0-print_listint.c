#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  function that prints
 *  .
 * @h: pointer to a list_t element
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
