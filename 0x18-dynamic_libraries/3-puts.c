#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * Return: void
 * @str: String to be printed
 */
void _puts(char *str)
{
	for (; *str; str++)
	{
		_putchar(*str);
	}
	_putchar(10);
}
