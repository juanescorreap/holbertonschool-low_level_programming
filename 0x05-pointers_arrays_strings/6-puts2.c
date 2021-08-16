#include "holberton.h"
/**
 * puts2 - Function that prints every other character of a string.
 * Return: Void.
 * @str: String to be printed
 */
void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	for (b = 0; a > b; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar(10);
}
