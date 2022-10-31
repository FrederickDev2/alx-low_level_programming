#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: input string
 * @accept: accepted strings
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int prev = 0;
	int i, j;

	j = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prev == count)
		{
			break;
		}
	}
	return (count);
}
