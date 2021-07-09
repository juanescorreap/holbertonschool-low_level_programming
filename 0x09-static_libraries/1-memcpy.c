#include "holberton.h"
/**
 * *_memcpy - Function that copies memory area.
 * Return: Pointer of type char
 * @dest: String in whic the bytes are pasted
 * @src: String form which the bytes are copied
 * @n:Number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;
	const char *y = src;

	for (; n--;)
	{
		*x++ = *y++;
	}
	return (dest);
}
