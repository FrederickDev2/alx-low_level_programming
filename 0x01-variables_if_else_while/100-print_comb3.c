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
	int digit_1;
	int digit_2;

	digit_1 = 48;
	digit_2 = 48;

	for (digit_1 = 48; digit_1 < 58; digit_1++)
	{
		digit_2 = digit_1 + 1;
		for (digit_2 = digit_2; digit_2 < 58; digit_2++)
		{
			putchar(digit_1);
			putchar(digit_2);
			if (digit_1 != 56 || digit_2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar(10);
	return (0);
}

