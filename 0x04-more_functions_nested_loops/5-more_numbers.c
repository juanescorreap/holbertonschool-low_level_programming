#include "holberton.h"
/**
 * more_numbers - prints numbers from 0 to 9 ten times
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		b = 0;
		_putchar(10);
	}
}

