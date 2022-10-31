#include<stdio.h>
#include "main.h"
/**
 * print_rev - print in reverse
 * @s: characters
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		printf("%c", s[length]);
		length--;
	}
	printf("\n");
}

