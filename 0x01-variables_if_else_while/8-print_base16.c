#include <stdio.h>
/**
* main - Prints the alphabet.
* Return: Always returns 0.
*/
int main(void)
{
	int n = 48;
	char l = 'a';
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar(10);
	return (0);
}
