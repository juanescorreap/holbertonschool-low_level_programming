#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* Return: returns to zero
* @n: variable whose last digit is printed
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = (n % 10) * -1;
}
	else
{
n = (n % 10);
}
_putchar(n + '0');
return (n);
}
