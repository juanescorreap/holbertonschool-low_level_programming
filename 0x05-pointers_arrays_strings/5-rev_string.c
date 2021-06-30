#include "holberton.h"
/**
 * rev_string - Function that reverses a string
 * Return: void
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int a;
	int b;
	int l1;
	int l2;
	int tmp1;
	int tmp2;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;
	for ((l1 = b - 1, l2 = 0); b / 2 > l2; l2++, l1--)
	{
		tmp1 = s[l2];
		tmp2 = s[l1];
		s[l2] = tmp2;
		s[l1] = tmp1;
	}
}
