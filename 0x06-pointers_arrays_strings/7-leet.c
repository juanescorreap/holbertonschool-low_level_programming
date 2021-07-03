#include "holberton.h"
/**
 * *leet - Function that encodes a string into 1337.
 * Return: String of type char
 * @s: String to be encoded
 */
char *leet(char *s)
{
	char x[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char y[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}
	return (s);
}
