#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Function that sets the value of a
 * bit to 0 at a given index.
 * Return:1 if it worked, or -1 if an error occurred.
 * @index: Is the index, starting
 * from 0 of the bit you want to set.
 * @n: Number to be changed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index <= (sizeof(unsigned long int) * 8))
	{
		tmp = 1 << index;
		*n = *n | tmp;
		*n = *n ^ tmp;
		return (1);
	}
	return (-1);
}
