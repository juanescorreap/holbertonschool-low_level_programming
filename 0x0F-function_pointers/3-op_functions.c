#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - Function that returns the sum of a and b
 * @a: Variable with value to be computed
 * @b: Variable with value to be computed
 * Return: int.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function that returns the difference of a and bb
 * @a: Variable with value to be computed
 * @b: Variable with value to be computed
 * Return: int.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function that returns the product of a and b
 * @a: Variable with value to be computed
 * @b: Variable with value to be computed
 * Return: int.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function that returns the division of a by b
 * @a: Variable with value to be computed
 * @b: Variable with value to be computed
 * Return: int.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Function that returns the division of a by b
 * @a: Variable with value to be computed
 * @b: Variable with value to be computed
 * Return: int.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
