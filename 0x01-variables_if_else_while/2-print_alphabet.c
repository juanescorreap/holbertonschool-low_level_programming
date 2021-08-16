#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet.
* Return: always returns 0.
*/
int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z" && ch != "e" && ch != "q"; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
