#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: input name.
 * @age: input age.
 * @owner: input owner.
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecpy, *ownercpy;
	int i;

	newdog = malloc(sizeof(dog_t));
	namecpy = malloc (strlen(name));
	ownercpy = malloc (strlen(owner));
	for (i = 0; name[i]; i++)
	{
		namecpy[i] = name[i];
	}

	for (i = 0; owner[i]; i++)
	{
		ownercpy[i] = owner[i];
	}

	newdog->name = namecpy;
	newdog->owner = ownercpy;
	newdog->age = age;

	return (newdog);
}
