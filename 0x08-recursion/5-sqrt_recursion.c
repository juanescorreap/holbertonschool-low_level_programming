#include "holberton.h"
#include <stdio.h>
/**
 * sqrt_iteration - Function that iterates to find
 * the natural square root of a number.
 * Return: Result of the operation (int).
 * @n: Number whose square roote is to be found.
 * @x: Number to be computed as a possible answer.
 */
int sqrt_iteration(int n, int x)
{
	if (n < x * x)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (sqrt_iteration(n, x + 1));
	}
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *  Return: Result of the operation.
 * @n: Number whose square roote is to be found.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_iteration(n, 0));
}
