#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int prime_factor = prime;
	long int divisor = 2;

	while (prime_factor != divisor)
	{
		if (prime_factor % divisor == 0)
		{
			prime_factor = prime_factor / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%li\n", prime_factor);
	return (0);
}
