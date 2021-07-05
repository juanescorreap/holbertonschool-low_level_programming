#include "holberton.h"
/**
 * *_memset - Function that fills memory with a constant byte
 * Return: String of type char
 * @s: Pointer whose memory area is to be filled
 * @b: Constant which with the memory area of s will be filled
 * @n: Number of bytes of the memory area of s to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	for (; n > 0 ; n--)
	{
		*a++ = b;
	}
	return (s);
}
