#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numNode = 0;
	listp_t *headPtr, *new, *add;

	headPtr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = headPtr;
		headPtr = new;
		add = headPtr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headPtr);
				return (numNode);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numNode++;
	}
	free_listp(&headPtr);
	return (numNode);
}
