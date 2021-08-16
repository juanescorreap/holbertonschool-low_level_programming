#include "holberton.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * Return: Unasigned integer representing the length of the prefix.
 * @s: Pointer to the string in which the bytes will be counted.
 * @accept: Pointer to the substring.
 */
unsigned int _strspn(char *s, char *accept)
{

	int c = 1;
	int i;
	int j;

	for (i = 0; s[i] != '\0' && c; i++)
	{
		c = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = 1;
			}
		}
	}
	if (i == 0)
	{
		return (0);
	}
	return ((unsigned int)i - 1);
}
