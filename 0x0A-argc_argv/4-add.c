#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that adds positive numbers.
 * Return: 0 if succesful.
 * @argc: Number of arguments passed to the function.
 * @argv: Array of strings cointaining the arguments.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
