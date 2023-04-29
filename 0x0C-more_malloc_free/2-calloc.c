#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: array elements.
 * @size: bytes.
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
