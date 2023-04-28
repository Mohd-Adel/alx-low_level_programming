#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: input size.
 *Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (!ptr)
	{
		exit (98);
	}
	return (ptr);
}
