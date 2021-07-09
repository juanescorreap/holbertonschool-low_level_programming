#include "holberton.h"
#include <stdio.h>
/**
 * factorial - Function that returns the factorial of a given number.
 * Return: Result of the operation
 * @n: Number to be computed
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
