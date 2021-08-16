#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Function that searches for an integer
 * Return: int.
 * @array: Pointer to address of "array"
 * @size: Size of the array
 * @cmp: Pointer to a function that takes an int and returns an int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		x = (cmp)(array[i]);
		if (x != 0)
		{
			return (i);
		}
	}
	return (-1);
}
