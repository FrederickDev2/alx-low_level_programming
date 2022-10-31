#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: Pointer to c else return NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
