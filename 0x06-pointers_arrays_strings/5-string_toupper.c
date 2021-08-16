#include "holberton.h"
/**
 * *string_toupper - Function that changes all
 * lowercase letters of a string to uppercase.
 * Return: String of type char.
 * @x: String to be modified.
 */
char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] >= 97 && x[a] <= 122)
		{
			x[a] = x[a]  - 32;
		}
	}
	return (x);
}
