#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * Return: Void.
 * @s: Pointer to the string to be printed.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
