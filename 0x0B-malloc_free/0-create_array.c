#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Function that creates an
 * array of chars, and initializes it with a specific char.
 * Return: Pointer to a string of characters
 * @size: Size of the array to be created
 * @c:Characater that initializes the array
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	{
		return (00);
	}
	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
	{
		return (00);
	}

	for (i = 0; i < size; i++)
	{
		pointer[i] = c;
	}
	pointer[i] = '\0';
	return (pointer);
}
