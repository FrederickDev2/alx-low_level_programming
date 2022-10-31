#include<stdio.h>

/**
 * main - program that prints all possible
 * combinations of single-digit numbers
 *
 * Description: Numbers must be separated by , followed by a space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
		digit++;
	}
	putchar(10);
	return (0);
}

