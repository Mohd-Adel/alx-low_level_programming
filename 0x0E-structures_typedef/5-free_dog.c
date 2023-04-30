#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free dogs.
 * @d: dog
 * Return: free dogs.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
