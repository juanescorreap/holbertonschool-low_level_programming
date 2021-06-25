#include "holberton.h"
/**
 * print_most_numbers - prints number from 0 to 9 except 2 and 4
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a >= 48 && a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
		_putchar(a);
		}
	}
	_putchar(10);
}

