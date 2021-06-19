#include <stdio.h>
/**
* main - Prints the alphabet
* Return: always returns to 0
*/
int main(void)
{
int n = 48;
while (n < 58)
{
putchar (n);
if (n != 57)
{
putchar (',');
putchar (' ');
}
n++;
}
putchar (10);
return (0);
}
