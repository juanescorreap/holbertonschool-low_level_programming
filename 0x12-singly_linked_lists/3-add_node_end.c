#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Function that adds a new
 * node at the end of a list_t list.
 * @head: pointer to a pointer to the first element of list_t
 * @str: pointer to the element to be added at the end.
 * Return: A size_t value for list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	while (tmp->str[i])
	{
		i++;
	}
	tmp->len = i;
	tmp->next = NULL;
	if (*head != NULL)
	{
		ptr = (*head);

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
		return (ptr->next);
	}
	*head = tmp;
	return (*head);
}
