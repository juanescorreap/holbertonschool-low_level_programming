#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * Return: Integer indicating if the first string is
 * less than, equal to or greater than the second string
 * @s1: Reference string
 * @s2: String to be compared
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
