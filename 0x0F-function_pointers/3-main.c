#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that computes two values
 * @argc:Argument counter
 * @argv:Argument vectors
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int (*pointerf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	pointerf = get_op_func(argv[2]);
	if (pointerf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", pointerf(x, y));
	return (0);
}
