#include"main.h"
#include<stddef.h>
/**
 * _strpbark - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes in the string
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
