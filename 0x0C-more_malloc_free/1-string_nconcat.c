#include "main.h"
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	unsigned int length;

	if (string == NULL)
	{
		return (1);
	}
	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: NULL is passed if string is empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lengthc, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		lengthc = len1 + len2 + 1;
	else
	{
		lengthc = len1 + n + 1;
		len2 = n;
	}
	str = malloc(lengthc);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
