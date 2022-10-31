#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
