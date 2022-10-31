#include "main.h"
#include<stdio.h>
/**
 * puts2 - prints a string
 * @str: string input
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			printf("%c", str[j]);
	}
	printf("\n");
}
