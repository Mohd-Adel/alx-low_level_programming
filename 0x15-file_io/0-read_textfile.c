#include "main.h"

/**
 * read_textfile - reads a text file.
 * @filename: input filename.
 * @letters: input numbers.
 *
 * Return: chars num.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, rt;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	rt = write(STDOUT_FILENO, buffer, rd);

	close(fd);

	free(buffer);

	return (rt);
}
