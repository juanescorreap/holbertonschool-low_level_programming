#include "holberton.h"
/**
* main - Prints "Holberton\n" using _putchar
* Return: Returns to zero
*
*/
int main(void)
{
int c;
char ph[10] = "Holberton\n";
for (c = 0; c <= 10; c++)
{
_putchar(ph[c]);
}
return (0);
}
