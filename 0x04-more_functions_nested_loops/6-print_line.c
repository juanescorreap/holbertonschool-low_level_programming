#include "holberton.h"
/**
 * print_line - prints a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		_putchar('_');
	}
	_putchar(10);
}

