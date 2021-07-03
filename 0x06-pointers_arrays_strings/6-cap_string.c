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

for (j = 0; x[j] != '\0'; j++)
{
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == x[j])
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
}
return (s);
}
