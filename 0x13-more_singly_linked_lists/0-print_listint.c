#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list
 * @h: number of lists
 * Return: size_t variable
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
