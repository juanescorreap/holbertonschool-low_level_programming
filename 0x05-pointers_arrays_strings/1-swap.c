#include "holberton.h"
/**
 * swap_int - Function swaps the pointed values of two pointers
 * Return: void
 * @a: First pointer whos value is to be swaped
 * @b: Second pointer whos value is to be swaped
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
