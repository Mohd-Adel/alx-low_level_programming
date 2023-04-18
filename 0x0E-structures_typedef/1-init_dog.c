#include "dog.h"
/**
 *init_dog - function that initializes a new dog
 *@d: struct dog type
 *@name: input dog name
 *@age: input dog age.
 *@owner: input dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog d;
	d.name = name;
	d.age = age;
	d.owner = owner;
}
