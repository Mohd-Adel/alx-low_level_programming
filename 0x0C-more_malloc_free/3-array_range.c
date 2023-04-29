#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *@min: min array value.
 *@max: max array value.
 *Return: array pointer.
 */

int *array_range(int min, int max)
{
	int arrlen, i, iterator;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	arrlen = max - min + 1;
	ptr = malloc(arrlen * sizeof(int));
	if (!ptr)
	{
		return (NULL);
	}
	iterator = min;
	for (i = 0; i < arrlen; i++)
	{
		ptr[i] = iterator;
		iterator++;
	}
	return (ptr);

}
