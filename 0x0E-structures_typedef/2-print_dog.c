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
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
}
