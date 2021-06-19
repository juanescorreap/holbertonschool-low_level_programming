#include <stdio.h>
/**
* main - Prints the alphabet
* Return: always returns to 0
*/
int main(void)
{
int n = 48;
char l = 97;
while (n <= 57)
{
putchar (n);
n++;
while (l <= 102)
{
putchar (l);	
l++;
}
}
putchar (10);
return (0);
}

