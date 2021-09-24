#include "main.h"
/**
 * *_strstr - Function that locates a substring.
 * Return: Pointer of type char to the located substring
 * @haystack: Pointer in which the characters of *needle are to be found
 * @needle: Pointer whose characters are to be located
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (00);

}
