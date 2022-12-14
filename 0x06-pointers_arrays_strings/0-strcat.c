#include<stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string to be appended
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
