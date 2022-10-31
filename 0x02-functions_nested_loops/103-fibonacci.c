#include <stdio.h>
#include "main.h"
/**
 * main - prints natural numbers
 * Description: computes and prints the sum of all the multiples
 * Return: 0
 */
int main(void)
{
	int count, is_even;
	long int sum, first, second, even;

	first = 1;
	second = 2;
	even = 2;
	for (count = 0; count <= 46; count++)
	{
		sum = first + second;
		is_even = sum % 2;
		if (sum < 4000000 && is_even == 0)
		{
			even += sum;
		}
		first = second;
		second = sum;
	}
	printf("%li\n", even);

	return (0);
}
