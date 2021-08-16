#include "holberton.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * Return: Void.
 * @n:Number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int l;
	int s;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
