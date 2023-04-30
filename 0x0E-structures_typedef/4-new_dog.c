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

	newdog = malloc(sizeof(dog_t));
	newdog->name = malloc(sizeof(char) * strlen(name));
	if (name)
	{
		newdog->name = name;
	}
	else
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * strlen(owner));
	if (!newdog->owner || !newdog->name || !newdog)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	if (owner)
	{
		newdog->owner = owner;
	}
	else
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	return (newdog);
}
