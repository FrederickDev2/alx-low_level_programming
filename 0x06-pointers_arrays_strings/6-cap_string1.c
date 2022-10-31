#include "main.h"
#include<stdio.h>
#include<stddef.h>
/**
 * previous_letter - checks the character for
 * space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }
 * @c: input character
 * Return: capitalize
 */
int previous_letter(char c)
{
	int i = 0;
	char *letter = " \t\n,;.!?\"(){}";

	while (letter[i] != '\0')
	{
		if (c == letter[i])
			return (1);
		i++;
	}
	return (0);
}
/**
 * cap_string -Capitalizes all word of a string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	int i;

	if (s == NULL)
		return (NULL);


	if (s[0] == '\0')
		return (s);
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
		return (s);
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if (previous_letter(s[i - 1]) == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
