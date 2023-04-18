#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct dog
 *@name: dog's name.
 *@owner: dog's ower.
 *@age: dog's age.
 */
	typedef struct dog
	{
		char *name;
		char *owner;
		float age;
	} dog;

	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
