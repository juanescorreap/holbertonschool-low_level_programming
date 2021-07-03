#include "holberton.h"
/**
 * *cap_string - Function that capitalizes all words of a string
 * Return: String of type char
 * @s: String to be reversed
 */
char *cap_string(char *s)
{
char x[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{',
	'}'};
int i;
int j;

for (j = 0; x[j]; j++)
{
	for (i = 0; s[i]; i++)
	{
		if (s[i] - 1 == x[j])
		{
			s[i] = x[j] - 32;
		}
	}
}
return (s);
}
