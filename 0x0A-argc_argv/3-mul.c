#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the result of a multiplication.
 * Return: Integer, 0 if succesful.
 * @argc: Number of arguments passed to the function.
 * @argv: Array of strings cointaining the arguments.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (49);
	}
	else
	{

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
}
