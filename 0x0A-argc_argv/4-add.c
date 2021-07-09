#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
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
