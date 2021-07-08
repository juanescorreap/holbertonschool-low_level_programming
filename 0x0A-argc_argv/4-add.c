#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'a' && *argv[i] <= 'z') ||
			    (*argv[i] >= 'A' && *argv[i] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) || (atoi(argv[i]) == 0))
					sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
