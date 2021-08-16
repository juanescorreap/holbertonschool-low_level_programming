#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout.
 * Return: On success 1. On error, -1 is returned,
 * and errno is set appropriately.
 * @c: The character to print.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
