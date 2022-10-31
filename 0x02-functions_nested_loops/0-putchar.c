#include<stdio.h>
#include "main.h"

/**
 * main - prints __purchar
 *
 * Description: Write a program that prints _putchar,
 * followed by a new line.
 *
 * Return: Always (0) Sucess
 */
int main(void)
{
	int i;
	char input[7] = "putchar";

	_putchar('_');
	for (i = 0; i < 7; i++)
	{
		_putchar(input[i]);

	}
	_putchar('\n');
	return (0);
}
