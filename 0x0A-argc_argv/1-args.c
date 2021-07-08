#include "holberton.h"
#include <stdio.h>
/**
 * main - Program that printst the number of arguments the function receives
 * Return: Integer, 0 if succesful
 * @argc: Number of arguments passed to the function
 * @argv: array of strings cointaining the arguments
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
