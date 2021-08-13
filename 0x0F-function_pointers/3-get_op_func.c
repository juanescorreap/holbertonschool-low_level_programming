#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Function that selects the correct function
 * to perform the operation asked by the user
 * @s:operator passed as argument to the program
 * Return: int.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
