#include <stdio.h>
/**
* main - Prints the alphabet.
* Return: always returns 0.
*/
int main(void)
{
	int ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
