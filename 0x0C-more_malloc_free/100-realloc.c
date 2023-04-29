#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - copy array.
 * @dest: destination.
 * @input: input.
 * @len: input size.
 * Return: null
 */
void _strcpy(char *dest, char *input, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = input[i];
	}
}

/**
 * _smaller - returns smaller value
 * @x: first value.
 * @y: sec value.
 * Return: smaller value.
 */

unsigned int _smaller(unsigned int x, unsigned int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input pointer.
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int smaller;
	void *output;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		if (ptr)
			free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	smaller = _smaller(old_size, new_size);
	output = malloc(new_size);
	_strcpy(output, ptr, smaller);
	free(ptr);
	return (output);
}
