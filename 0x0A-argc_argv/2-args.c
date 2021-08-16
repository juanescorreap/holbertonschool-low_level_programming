#include "holberton.h"
#include <stdio.h>
/**
 * main - Program that prints all the arguments given, including the name.
 * Return: Integer, 0 if succesful.
 * @argc: Number of arguments passed to the function.
 * @argv: Array of strings cointaining the arguments.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
