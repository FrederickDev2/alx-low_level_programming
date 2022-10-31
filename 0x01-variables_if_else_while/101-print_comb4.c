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
	int a;
	int b;
	int c;

	a = 48;
	b = 48;
	c = 49;

	for (a = 48; a < 58; a++)
	{
		b = a + 1;
		for (b = b; b < 58; b++)
		{
			c = b + 1;
			for (c = c; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}
	putchar(10);
	return (0);
}

