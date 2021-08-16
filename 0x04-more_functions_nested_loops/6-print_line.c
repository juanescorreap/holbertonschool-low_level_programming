#include "holberton.h"
/**
 * print_line - Prints a straight line in the terminal.
 * Return: Void.
 * @n: Number of times the line will be printed.
 */
void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{

	for (lines = 0; lines < n; lines++)
	{
		_putchar('_');
	}
	_putchar(10);
	}
}
