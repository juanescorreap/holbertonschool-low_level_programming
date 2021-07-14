#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  free_grid - Function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * Return: Void
 * @grid: Array of pointers to a 2D matrix
 * @height: Size of the internal arrays
 */
void free_grid(int **grid, int height)
{

	if (height <= 0 || grid == NULL)
	{
		return;
	}
	free(grid);
	return;

}
