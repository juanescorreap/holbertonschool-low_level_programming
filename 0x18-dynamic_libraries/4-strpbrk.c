#include "main.h"
/**
 * *_strpbrk - Function that searches a string for any of a set of bytes
 * Return: Pointer of type char
 * @s: Pointer to the string in which the character is to be searched
 * @accept: Pointer to the string from which the characters will be searched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (00);
}
