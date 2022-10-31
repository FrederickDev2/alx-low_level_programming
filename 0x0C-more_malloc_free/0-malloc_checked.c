#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: is an int
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		return (0);
	}
	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
