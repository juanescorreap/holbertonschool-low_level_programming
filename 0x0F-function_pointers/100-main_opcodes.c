#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that prints the opcodes of its own main function.
 * Return: int.
 * @argc:Argument counter.
 * @argv:Argument vectors.
 */
int main(int argc, char *argv[])
{
	char *a;
	int i;
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		return (2);
	}
	a = (char *)main;
	for (i = 0; i < x; i++)
	{
		if (i < x - 1)
		{
			printf("%.2hhx ", a[i]);
		}
		else
		{
			printf("%.2hhx", a[i]);
		}
	}
	printf("\n");
	return (0);
}
