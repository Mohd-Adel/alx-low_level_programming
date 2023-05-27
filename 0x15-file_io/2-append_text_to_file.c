#include "main.h"

/**
 * append_text_to_file - append to end.
 * @filename: input filename.
 * @text_content: input content.
 *
 * Return: if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		rt = write(fd, text_content, i);

		if (rt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
