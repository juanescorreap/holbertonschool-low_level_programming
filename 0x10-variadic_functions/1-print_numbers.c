#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * Return: Void.
 * @separator: Constant pointer to char that is to be printed as separator.
 * @n: Number of parameter of unsigned int type.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(parameters);
	printf("\n");
}
