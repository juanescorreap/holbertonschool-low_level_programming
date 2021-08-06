#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - Function that returns the
 * value of a bit at a given index
 * @index: Position in the number to be returned.
 * @n: Number to be evaluated
 * Return: value of the evaulated bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j;
	int res;
	unsigned long int num = n;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	res = num >> index;
	if (res & 1)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}
