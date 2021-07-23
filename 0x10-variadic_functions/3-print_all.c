#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function that  that prints anything.
 * @format: List of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i;
	char *arguments;
	char *esp = "";
	va_list parameters;

	va_start(parameters, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", esp, va_arg(parameters, int));
				break;
			case 'i':
				printf("%s%d", esp, va_arg(parameters, int));
				break;
			case 'f':
				printf("%s%f", esp, va_arg(parameters, double));
				break;
			case 's':
				arguments = va_arg(parameters, char *);
				if (arguments == NULL)
				{
					arguments = "(nil)";
				}
				printf("%s%s", esp, arguments);
				break;
			default:
				i++;
				continue;
			}
		esp = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(parameters);
}
