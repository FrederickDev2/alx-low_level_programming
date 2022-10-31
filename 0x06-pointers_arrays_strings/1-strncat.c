#include<stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string to be appended
 * @n: number of bytes of second string to be appended
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
