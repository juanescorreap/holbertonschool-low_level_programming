#include <stdio.h>
/**
* main - Prints the alphabet.
* Return: Always returns 0.
*/
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(10);
	return (0);
}
