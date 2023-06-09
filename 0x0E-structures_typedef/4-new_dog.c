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
	namecpy = malloc (strlen(name) + 1);
	ownercpy = malloc (strlen(owner) + 1);
	for (i = 0; name[i]; i++)
	{
		namecpy[i] = name[i];
	}
	namecpy[i + 1] = '\0';

	for (i = 0; owner[i]; i++)
	{
		ownercpy[i] = owner[i];
	}
	ownercpy[i + 1] = '\0';

	newdog->name = namecpy;
	newdog->owner = ownercpy;
	newdog->age = age;

	return (newdog);
}
