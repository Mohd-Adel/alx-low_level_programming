#include "main.h"
/**
 * *_strcpy - copies the string.
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, i;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
