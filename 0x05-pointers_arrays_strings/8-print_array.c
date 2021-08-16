#include "holberton.h"
#include <stdio.h>
/**
 * print_array -  Function that prints n elements of
 * an array of integers, followed by a new line.
 * Return: Void.
 * @a: String to be printed
 * @n: Number of elements in the array to be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
