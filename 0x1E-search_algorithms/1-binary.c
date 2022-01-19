#include "search_algos.h"
/**
 *real_binary_search - Function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: array to search in
 *@l: lower index
 *@r: higher index
 *@value: value to search for
 *Return: First index where value is located
 */
int real_binary_search(int *array, int l, int r, int value)
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if ((r - l) >= 0)
	{
		print_array(array, l, r);
	}
	if (r >= l)
	{
		i = l + (r - l) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			return (real_binary_search(array, l, i - 1, value));
		}
		return (real_binary_search(array, i + 1, r, value));
	}
	return (-1);
}
/**
 *print_array - Function that prints the current
 *array in which the value is being searched
 *@array: array to search in
 *@l: lower index
 *@r: higher index
 *Return: Void
 */
void print_array(int *array, int l, int r)
{
	printf("Searching in array: ");
	for (; l <= r; l++)
	{
		printf("%d", array[l]);
		if (l < r)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 *binary_search - Function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: First index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	return (real_binary_search(array, 0, (int)size - 1, value));
}
