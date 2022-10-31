#include<stdio.h>
#include "main.h"
/**
 * rev_string - print in reverse
 * @s: characters
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int max, half;
	char a, b;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	max = length;
	half = length / 2;
	while (half >= 0)
	{
		a = s[max - half];
		b = s[half];
		s[half] = a;
		s[max - half] = b;
		half--;
	}
}

