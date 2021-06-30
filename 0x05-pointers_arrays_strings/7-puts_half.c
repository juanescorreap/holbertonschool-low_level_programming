#include "holberton.h"
/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * Return: void
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int a;
	int b;
	int n;

	for (a = 0; str[a]; a++)
	{
	}
	n = a;
	if (a % 2 != 0)
	{
		for (b = a / n; b < ((n - 1) / 2); b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		for (b = a / 2 ; a > b; b++)
		{
		_putchar(str[b]);
		}
	}
	_putchar(10);
}
