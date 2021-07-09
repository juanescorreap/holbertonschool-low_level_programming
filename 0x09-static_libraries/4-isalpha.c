#include "holberton.h"
/**
* _isalpha - checks for an uppercase character
* Return: returns to zero
* @c: variable is varable that will be checked for uppercase
*/
int _isalpha(int c)
{
	if ((c <= 122  && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
	}	return (0);
	}
