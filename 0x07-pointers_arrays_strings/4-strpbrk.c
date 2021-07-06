#include "holberton.h"
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
	int p;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)

	p = i;
		for (i = 0; accept[i] != '\0'; i++)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (accept[i] == s[j])
				{
					if (j <= p)
					{
						p = j;
						a = 1;
					}
				}
			}
		}

		if (a == 1)
		{
			return (&s[p]);
		}
		else
		{
			return (00);
		}

}
