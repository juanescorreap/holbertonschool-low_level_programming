#include <stdio.h>
/**
* main - Prints the alphabet
* Return: always returns to 0
*/
int main(void)
{
int ch = 122;
while (ch >= 97)
{
putchar (ch);
ch--;
}
putchar (10);
return (0);
}
