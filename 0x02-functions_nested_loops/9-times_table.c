#include "main.h"
/**
 * times_table - prints nine time table
 * Return: void
 */
void times_table(void)
{
	int x, y, multiply, tens, ones;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			multiply = x * y;
			tens = multiply / 10;
			ones = multiply % 10;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (multiply < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			y++;
		}
		y = 0;
		x++;
		_putchar('\n');
	}
}
