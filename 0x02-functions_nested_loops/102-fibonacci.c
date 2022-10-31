#include <stdio.h>
#include "main.h"
/**
 * main - prints natural numbers
 * Description: computes and prints the sum of all the multiples
 * Return: 0
 */
int main(void)
{
	int count;
	long int sum, first, second;

	first = 1;
	second = 2;
	printf("%li, %li, ", first, second);
	for (count = 0; count <= 46; count++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
