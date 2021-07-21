#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that prints a name.
 * @name: Pointer to address of "name"
 * @f: Pointer to function that  takes pointer char and returns void.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name !=  NULL && f !=  NULL)
	{
		(f)(name);
	}
}
