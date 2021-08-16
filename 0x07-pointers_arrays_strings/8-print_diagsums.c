#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * Return: Void
 * @a: Pointer to the string containing the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = a[i] + sum1;
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 = a[i] + sum2;
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
