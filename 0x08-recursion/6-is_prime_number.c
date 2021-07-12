#include "holberton.h"
#include <stdio.h>
/**
 * prime_iteration - Function that iterates to find
 * if a number is prime
 * Return: Result of the operation
 * @n: Number to be evaluated
 * @x: Number to divide by
 */

int prime_iteration(int n, int x)
{

	if (n % x  == 0)
	{
		return (0);
	}
	else if (n % x != 0 && x == n / 2)
	{
		return (1);
	}
	else
	{
		return (prime_iteration(n, x + 1));
	}
}
/**
 * is_prime_number - Finds if a number is prime
 *  Return: Result of the operation
 * @n: Number to be evaluated
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (prime_iteration(n, 2));
}
