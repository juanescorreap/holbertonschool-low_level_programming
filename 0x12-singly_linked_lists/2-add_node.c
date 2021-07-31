#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Function that  adds a new
 * node at the beginning of a list_t list.
 * @head: pointer to a pointer to the first element of list_t
 * @str: pointer to the element to be added at the begenning.
 * Return: A size_t value for list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
