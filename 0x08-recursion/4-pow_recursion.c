#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - Function that returns
 * the value of x raised to the power of y.
 * Return: Result of the operation
 * @x: Base number
 * @y: Exponent number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
