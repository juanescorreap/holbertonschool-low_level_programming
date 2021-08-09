#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - Function that creates a file.
 * @filename:File to create.
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int fd2 = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		fd2 = write(fd, text_content, 0);
		if (fd2 == -1)
		{
			return (-1);
		}
		return (1);
	}
	else
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		fd2 = write(fd, text_content, strlen(text_content));
		if (fd2 == -1)
		{
			return (-1);
		}
		return (1);
	}
	close(fd);
}
