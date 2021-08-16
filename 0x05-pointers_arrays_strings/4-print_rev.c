#include "holberton.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * Return: Void.
 * @s: String to be printed.
 */
void print_rev(char *s)
{
	int l;
	int g;
	int h;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	h = l;
	for (g = h - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar(10);
}
