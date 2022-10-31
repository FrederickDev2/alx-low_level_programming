#include"lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to count
 * Return: lenth of string
 */
int _strlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * add_node_end - function that adds a new node at the beginning
 * @head: head of the node to be pointed to
 * @str: string pointer to be duplicated
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;
	char *string;
	list_t *temp;

	temp = *head;
	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(endNode);
		return (NULL);
	}
	endNode->len = _strlen(str);
	endNode->str = string;
	endNode->next = NULL;
	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = endNode;
	return (endNode);
}
