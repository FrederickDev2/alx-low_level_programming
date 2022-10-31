#include"main.h"
#include<stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: input string
 * @needle: set of bytes in the string
 * Return: pointer to the byte in s
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, begin;
	int length = 0;

	begin = 0;
	while (needle[length] != '\0')
	{
		length++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < length && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				begin = i;
			}
			if (j == length - 1)
			{
				return (haystack + begin);
			}
		}
	}
	i = 0;
	if (needle[i] == '\0')
	{
		return (haystack + begin);
	}

	return (0);
}
