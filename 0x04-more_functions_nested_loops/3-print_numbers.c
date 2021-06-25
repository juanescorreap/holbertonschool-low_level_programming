#include "holberton.h"
/**
 * print_numbers - prints number from 0 to 9
 * Return: zero
 * @a:variable that takes the value to be printed
 */
void print_numbers(void)

{
	int a;

	for (a = 48; a >= 48 && a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}

