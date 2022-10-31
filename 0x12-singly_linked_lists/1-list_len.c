#include<stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * list_len - prints all the elements of a list_t list
 * @h: number of lists
 * Return: size_t variable
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
		{
			return (0);
		}
		h = h->next;
	}
	return (size);
}
