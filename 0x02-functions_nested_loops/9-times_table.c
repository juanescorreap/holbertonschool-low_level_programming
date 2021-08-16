#include "holberton.h"
/**
* times_table - Prints the nine times table.
* Return: Void.
*/
void times_table(void)
{
	int x;
	int y;
	int z;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = (x * y);
			if (z / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((z % 10) + '0');
				if (x < 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (x < 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar(10);
	}
}
