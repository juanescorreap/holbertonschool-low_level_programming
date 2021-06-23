#include "holberton.h"
/**
* print_alphabet_x10 - Prints the alphabet ten times using _putchar
* Return: returns to zero
*/
void print_alphabet_x10(void)
{
	char ch = 97;
	int n;

	for (n = 0; n < 10; n++)
	{
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		ch = 97;
		_putchar(10);
	}
}
