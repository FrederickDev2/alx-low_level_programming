#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int number = argc - 1;
	int i;

	for (i = 0; i <= number; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
