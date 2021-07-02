#include "holberton.h"
/**
 * reverse_array - Function that reverses the content of an array of integers.
 * Return: Void
 * @a: String to be reversed
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int b;
	int tmp = 0;

	for (b = 0; b < n / 2; b++)
	{
		tmp = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = tmp;
	}
}
