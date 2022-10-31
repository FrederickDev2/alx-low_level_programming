#include "main.h"
/**
 * print_times_table - prints nine time table
 * @n: n times table
 * Return: void
 */
void print_times_table(int n)
{int x, y, multiply;

	if (n <= 15 && n >= 0)
	{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			multiply = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else if (multiply < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiply % 10 + '0');
			}
			else if (multiply >= 10 && multiply < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((multiply / 10) % 10 + '0');
				_putchar(multiply % 10 + '0');
			}
			else if (multiply > 99 && multiply < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiply / 100) % 10 + '0');
				_putchar((multiply / 10) % 10 + '0');
				_putchar(multiply % 10 + '0');
			}
		}
		_putchar('\n');
	}
	}
}
