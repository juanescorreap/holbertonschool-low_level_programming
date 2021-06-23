#include "holberton.h"
/**
* print_sign - prints the sign of a number
* Return: returns to zero
* @n: variable number whose sign will be checked
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
