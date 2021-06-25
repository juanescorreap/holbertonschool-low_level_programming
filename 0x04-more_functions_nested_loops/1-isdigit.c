#include "holberton.h"
/**
 * _isdigit - Checks variable c for a digit (0 through 9)
 * Return: 1 if its a digit, otherwise 0
 *@c: vairable to be evaluated
 */
int _isdigit(int c)

{
	int d;

	if (c >= 48 && c <= 57)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	return (d);
}
