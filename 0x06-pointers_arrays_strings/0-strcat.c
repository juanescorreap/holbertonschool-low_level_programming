#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings.
 * Return: Pointer of type char.
 * @dest: First string to be concatenated.
 * @src: String to be appended.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	return (dest);
}
