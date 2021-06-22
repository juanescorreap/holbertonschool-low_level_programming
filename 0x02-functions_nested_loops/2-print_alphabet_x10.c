#include "holberton.h"
/**
* print_alphabet_x10 - Prints the alphabet ten times using _putchar
* Return: returns to zero
*/
void print_alphabet_x10(void)
{
char ch = 97;
int n = ch / 122;
while (n <= 10)
{
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar(10);
}
}
