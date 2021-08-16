#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function that  prints strings, followed by a new line.
 * Return: Void.
 * @separator: Constant pointer to char that is to be printed as separator.
 * @n: Number of parameter of unsigned int type
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int i;
	va_list parameters;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(parameters, char *);
		if (p == NULL)
		{
			p = "(nil)";
		}
		printf("%s", p);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(parameters);
	printf("\n");
}
