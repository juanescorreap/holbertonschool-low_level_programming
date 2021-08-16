#include "holberton.h"
/**
 * print_chessboard - Function that prints the chessboard.
 * Return: Void.
 * @a: Pointer to the string containing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
