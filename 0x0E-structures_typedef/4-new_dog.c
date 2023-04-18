#include "dog_t"
#include <stdio.h>
/**
 * new_dog - function that creates a new dog.
 * @name: input name.
 * @age: input age.
 * @owner: input owner.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d.name = name;
	d.age = age;
	d.owner = owner;
	return (d);
}
