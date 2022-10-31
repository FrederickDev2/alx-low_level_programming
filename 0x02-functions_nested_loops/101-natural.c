#include <stdio.h>
#include "main.h"
/**
 * main - prints natural numbers
 * Description: computes and prints the sum of all the multiples
 * Return: 0
 */
int main(void)
{
	int i, sum, multiple_3, multiple_5;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		multiple_3 = i % 3;
		multiple_5 = i % 5;
		if (multiple_3 == 0 || multiple_5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
