#include "holberton.h"
/**
* main - Prints "Holberton\n" using _putchar.
* Return: Returns to zero.
*/
int main(void)
{
	char *ph = "Holberton\n";
	while (*ph)
	{
		_putchar(*ph++);
	}
	return (0);
}
