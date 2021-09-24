#include "main.h"
/**
 * _isupper - Checks if  variable c is uppercase
 * Return: if uppercase 1, otherwise 0
 *@c: vairable to be evaluated for upper case
 */
int _isupper(int c)

{
	int u;

	if (c >= 65 && c <= 90)
	{
		u = 1;
	}
	else
	{
		u = 0;
	}
	return (u);
}
