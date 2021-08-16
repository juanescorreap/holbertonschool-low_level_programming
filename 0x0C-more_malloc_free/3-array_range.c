#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that allocates memory for an array, using malloc.
 * Return: Pointer to allocated space in memory.
 * @min: Inferior limit of the array.
 * @max: Superior limit of the array.
 */
int *array_range(int min, int max)
{
	int k;
	int i;
	int *newstr;

	if (min > max)
	{
		return (00);
	}
	newstr = malloc(sizeof(int) * (max - min + 1));
	if (newstr == NULL)
	{
		return (00);
	}
	k = min;
	for (i = 0; i <= (max - min); i++, k++)
	{
		newstr[i] = k;
	}
	return (newstr);
}
