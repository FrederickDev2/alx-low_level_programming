#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->age = age;
	if (name)
	{
		_name = malloc(sizeof(char) * (strlen(name) + 1));
		if (!_name)
		{
			free(d);
			return (NULL);
		}
		d->name = strcpy(_name, name);
	}
	else
		d->name = NULL;
	if (owner)
	{
		_owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (!_owner)
		{
			free(_name);
			free(d);
			return (NULL);
		}
		d->owner = strcpy(_owner, owner);
	}
	else
		d->owner = NULL;
	return (d);
}
