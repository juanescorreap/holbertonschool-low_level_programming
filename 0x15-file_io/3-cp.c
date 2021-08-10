#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * file_copy - Program that copies the content of a file to another file.
 * @argv:Argument vectors
 * Return: int.
 */

void file_copy(char *argv[])
{
	int fd = 0, fd2 = 0, fd3 = 1, fd4 = 0, fd5 = 0, fd6 = 0;
	char buffer[1024];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fd3 > 0)
	{
		fd3 = read(fd, buffer, 1024);
		if (fd3 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fd4 = write(fd2, buffer, fd3);
		if (fd4 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	fd5 = close(fd);
	fd6 = close(fd2);
	if (fd5 == -1 || fd6 == -1)
	{
		if (fd5 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd5);
		if (fd6 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd6);
		exit(100);
	}
}
/**
 * main - Program that copies the content of a file to another file.
 * @argc:Argument counter
 * @argv:Argument vectors
 * Return: int.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy((char **)argv);
	return (0);
}
