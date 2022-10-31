#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dog from memory
 * @major: dog object
 * Return: nothing
 */
void free_dog(dog_t *major)
{
	if (major == NULL)
		return;
	if (major->owner != NULL)
		free(major->owner);
	if (major->name != NULL)
		free(major->name);

	free(major);
}
