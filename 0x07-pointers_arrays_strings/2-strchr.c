#include "holberton.h"
/**
 * *_strchr - Function that locates a character in a string.
 * Return: Pointer of type char
 * @s: Pointer to the string in which the character is to be located
 * @c: Character to be located in string pointed by s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (00);
}
