#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	k = array;
	for (i = 0; i < nmemb * size; i++)
		k[i] = 0;
	return (array);
}
