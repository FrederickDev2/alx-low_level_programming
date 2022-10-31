#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int number = argc - 1;

	printf("%d\n", number);
	return (0);
}
