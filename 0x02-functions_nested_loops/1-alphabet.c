#include "holberton.h"
/**
* print_alphabet - Prints the alphabet using _putchar
* Return: returns to zero
*/
void print_alphabet(void)
{
char ch = 97;
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar(10);
}
