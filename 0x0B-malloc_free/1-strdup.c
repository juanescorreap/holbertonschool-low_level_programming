#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * Return: Pointer to a string of characters
 * @str: Size of the array to be created
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;
	int len;

	if (str == NULL)
	{
		return (00);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
	{
		return (00);
	}
	for (i = 0; i < len + 1; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';
	return (newstr);
}
