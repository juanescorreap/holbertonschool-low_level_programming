#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - Function that prints the binary
 * representation of a number.
 * Return: Void.
 * @n: Number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	int i;
	int res;
	int digits = 0;
	unsigned long int dec = n;

	while (n)
	{

		n = n >> 1;
		digits++;
	}
	for (i = digits - 1; i >= 0; i--)
	{
		res = dec >> i;

		if (res & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
		if (dec == 0)
		{
			_putchar('0');
		}
}
