#include<stdio.h>
#include "main.h"
/**
 * puts_half - prints half string
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int i, length_of_the_string, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i - 1;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		n += 1;
		while (n <= length_of_the_string)
		{
			printf("%c", str[n]);
			n++;
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		n += 1;
		while (n <= length_of_the_string)
		{
			printf("%c", str[n]);
			n++;
		}
	}
	printf("\n");
}




