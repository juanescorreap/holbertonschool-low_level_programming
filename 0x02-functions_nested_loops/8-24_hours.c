#include "holberton.h"
/**
* jack_bauer - Prints every hour of the day from 00:00 to 23:59
* Return: returns to zero
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23 ; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
		}
	}
}
