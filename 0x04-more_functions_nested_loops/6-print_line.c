#include "holberton.h"
/**
 * print_line - prints a straight line in the terminal
 * Return: void
 * @n: number of times the line will be printed
 */
void print_line(int n)

{
	int lines;

	if (n <= 0)
	{
		_putchar(10);
	}

	for (lines = 0; lines < n; lines++)
	{
		_putchar('_');
	}
	_putchar(10);
}

