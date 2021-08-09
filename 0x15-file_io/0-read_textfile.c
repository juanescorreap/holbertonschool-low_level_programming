#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename:File to be read.
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0;
	ssize_t fd2 = 0;
	ssize_t fd3 = 0;
	char buffer[624];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	fd2 = read(fd, buffer, letters);
	if (fd2 == -1)
	{
		return (0);
	}
	fd3 = write(STDOUT_FILENO, buffer, fd2);
	if (fd3 == -1)
	{
		return (0);
	}
	close(fd);
	return (fd2);
}
