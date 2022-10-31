#include"lists.h"
#include <string.h>

/**
 *  * _strlen - returns the length of a string
 *   * @s: string to count
 *    * Return: lenth of string
 *     **/
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
 * add_node - function that adds a new node at the beginning
 * @head: head of the node to be pointed to
 * @str: string pointer to be duplicated
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
