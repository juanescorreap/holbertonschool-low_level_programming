#include "holberton.h"
/**
 * largest_number - Returns the largest of 3 numbers.
 * Return: Largest number.
 * @a: First integer.
 * @b: Second integer.
 * @c: Third integer.
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
