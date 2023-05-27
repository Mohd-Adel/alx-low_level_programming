#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_buff - Allocates 1024
 * @file: input file
 *
 * Return: pointer to new memory
 */
char *new_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	/*check*/
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * cl_file - close fd
 * @fd: input fd
 */
void cl_file(int fd)
{
	int end;

	end = close(fd);

	/*check*/
	if (end == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy files. 
 * @argc: args count
 * @argv: args values
 * Return: success.
 */
int main(int argc, char *argv[])
{
	int start, end, rd, rt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = new_buff(argv[2]);
	start = open(argv[1], O_RDONLY);
	rd = read(start, buff, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		rt = write(end, buff, rd);
		if (end == -1 || rt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(start, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	cl_file(start);
	cl_file(end);

	return (0);
}
