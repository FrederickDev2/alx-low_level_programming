#include<stdio.h>
/**
 * main - print numbers from zero to 10
 *
 * Description: prints all single digit starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
