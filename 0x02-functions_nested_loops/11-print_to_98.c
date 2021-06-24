#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* followed by a new line.
* Return: returns to zero
* @n: Number from wich numbers are printed up to 98
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
			printf(", ");
			}

		}

	}
	if (n > 98)
	{
		for (; n < 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
	}
	printf("\n");
}
