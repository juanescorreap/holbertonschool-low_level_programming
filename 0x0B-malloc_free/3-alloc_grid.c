#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * Return: Pointer to the leading string
 * @s1: String to be concatenated
 * @s2: String to be appended
 */
 int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int f;
	int **newstr;
	if(width == 0 || height == 0)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(int *) * height);
	if (newstr == NULL)
	{
		return (00);
	}
	for(i = 0; i <= height; i++)
	{
		newstr[i] = malloc(sizeof(int) * width);
		if (newstr[i] == NULL)
		{
			for(i = height; i >= 0; i--)
			{
				free(newstr[i]);
				free(newstr);
			}
		}
	}
	for(f = 0; f <= height; f++)
	{
		for(n = 0; n < width; n++)
		{
			newstr[f][n] = 0;
		}
	}
	return(newstr);
}
