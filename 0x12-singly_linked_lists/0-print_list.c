#include<stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: number of lists
 * Return: size_t variable
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (size);
}
