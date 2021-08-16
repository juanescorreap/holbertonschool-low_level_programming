#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function that returns the length of a string.
 * Return: Length of the string (int).
 * @s: Pointer to the string to be counted
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
