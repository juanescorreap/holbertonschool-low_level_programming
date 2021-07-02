#include "holberton.h"
/**
 * *_strncpy - Function that copies a string
 * Return: Pointer of type char
 * @dest: First string to be concatenated
 * @src: String to be appended
 * @n: Number of bytes to be used from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
