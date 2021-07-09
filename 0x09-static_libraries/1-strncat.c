#include "holberton.h"
/**
 * *_strncat - Function that concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: Pointer of type char
 * @dest: First string to be concatenated
 * @src: String to be appended
 * @n: Number of bytes to be used from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int i = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[i] && n--)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
