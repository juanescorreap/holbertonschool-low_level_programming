#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * Return: Double pointer to the leading string
 * @width: Width of the matrix
 * @height: Height of the matrix
 */
int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int f;
	int **newstr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(*newstr) * height);
	if (newstr == NULL)
	{
		return (00);
	}
	for (i = 0; i <= height; i++)
	{
		newstr[i] = malloc(sizeof(**newstr) * width);
		if (newstr[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
			{
				free(newstr[i]);
			}
		       	free(newstr);
			return(00);
		}
	}
	for (f = 0; f <= height; f++)
	{
		for (n = 0; n < width; n++)
		{
			newstr[f][n] = 0;
		}
	}
	return (newstr);
}
