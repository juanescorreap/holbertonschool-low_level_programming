#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of parameters of unsigned int type
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list parameters;

	if (n == 0)
	{
		return (0);
	}
	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}
