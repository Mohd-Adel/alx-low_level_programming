#include "dog.h"
#include <stdio.h>
/**
 *print_dog -  function that prints a struct dog.
 *@d: input struct.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age)
		{
		printf("Age: %s\n", d->name);
		}
		else
		{
		printf("Age: (nil)\n");
		}
		if (d->owner)
		{
		printf("Owner: %s\n", d->name);
		}
		else
		{
		printf("Owner: (nil)\n");
		}
	}
}
