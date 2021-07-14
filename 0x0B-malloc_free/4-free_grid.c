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
int i;

if (height <= 0 || grid == NULL)
{
	return;
}
for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
return;
}
