#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * Return: Void.
 * @s: Pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
