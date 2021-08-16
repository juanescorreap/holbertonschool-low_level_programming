#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings.
 * Return: Pointer to the leading string.
 * @s1: First string to be concatenated.
 * @s2: String to be appended.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int x;
	int y;
	char *newstr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	newstr = malloc(sizeof(char) * (i + j + 1));
	if (newstr == NULL)
	{
		return (00);
	}
	for (x = 0; x < i; x++)
	{
		newstr[x] = s1[x];
	}
	for (y = 0; y < j; y++)
		newstr[x + y] = s2[y];
	newstr[x + y] = '\0';
	return (newstr);
}
