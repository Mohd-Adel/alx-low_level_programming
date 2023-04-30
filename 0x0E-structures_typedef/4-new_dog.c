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
	int i;
	char namecpy[]ownercpy[]

	newdog = malloc(sizeof(dog_t));
	newdog->name = malloc(sizeof(char) * strlen(name));
	newdog->owner = malloc(sizeof(char) * strlen(owner));
	if (!newdog->owner || !newdog->name || !newdog)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		newdog->name[i] = name[i];
		namecpy[i] = name[i];
	}
	for (i = 0; owner[i]; i++)
	{
		newdog->owner[i] = owner[i];
		ownercpy[i] = owner[i];
	}
	newdog->age = age;
	return (newdog);
}
