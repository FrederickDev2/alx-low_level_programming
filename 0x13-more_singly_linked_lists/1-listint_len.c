#include<stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * listint_len - prints all the elements of a list_t list
 * @h: number of lists
 * Return: size_t variable
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
