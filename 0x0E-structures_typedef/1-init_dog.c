#include "dog.h"
#include "stdio.h"
/**
 * init_dog - initializing struct dog
 * @d: pointer to structure
 * @name: name
 * @age: age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
