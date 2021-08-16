#include "holberton.h"
/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 * Return: Void.
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if ((b / 10) != 0)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		b = 0;
		_putchar(10);
	}
}
