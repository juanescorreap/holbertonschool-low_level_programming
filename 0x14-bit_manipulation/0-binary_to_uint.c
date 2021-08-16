#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Function that converts a
 * binary number to an unsigned int.
 * Return: Number converted from binary int.
 * @b: Number to convert form binary to int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;
	int fa = 1;
	int nu = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '1' && b[i] != '0')
			{
				return (0);
			}
			i++;
		}
		i--;

		for (j = i; j >= 0; j--)
		{
			nu = nu + ((b[j] - '0') * fa);
			fa = 2 * fa;
		}
		return (nu);
	}
	return (0);
}
