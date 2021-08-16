#include "holberton.h"
/**
* _abs - computes the absolute number of an integer.
* Return: Result of the operation.
* @x: Variable number to be computed.
*/
int _abs(int x)
{
	return (x * ((x > 0) - (x < 0)));
}
