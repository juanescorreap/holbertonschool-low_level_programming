#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - Function that allocates memory using malloc.
 * Return: Void (A pointer of any data type)
 * @b: Size of the memory block in bytes
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	if (b <= 0)
	{
		exit(98);
	}
	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
