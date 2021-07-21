#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 * @array: Pointer to address of "array"
 * @size: Size of the array
 * @action: Pointer to a function that takes pointer int and returns void.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
	(action)(array[i]);
	}
}