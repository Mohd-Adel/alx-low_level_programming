#include "main.h"

/**
 * create_file - make new file
 * @filename: input filename.
 * @text_content: file content.
 *
 * Return: if successs.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	rt = write(fd, text_content, i);

	if (rt == -1)
		return (-1);

	close(fd);

	return (1);
}
