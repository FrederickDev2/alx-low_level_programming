#include "main.h"
#include<stdio.h>
/**
 * _strlen - get lenth of string
 * @s: string input
 * Return: lenth
 */
int _strlen(char *s)
{
	int stl_length = 0;

	while (s[stl_length] != '\0')
	{
		stl_length++;
	}
	return (stl_length);
}
