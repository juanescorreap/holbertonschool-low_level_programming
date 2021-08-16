#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * Return: Pointer to allocated space in memory.
 * @nmemb: Number of elements to be allocated.
 * @size: Size of elements.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *pointer;
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
pointer = malloc((size * nmemb));
	if (pointer == NULL)
	{
		return (00);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}
return (pointer);
}
