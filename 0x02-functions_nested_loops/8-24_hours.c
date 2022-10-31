#include "main.h"
/**
 * jack_bauer - prints 24hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, max;

	max = '9';
	a = '0';
	while (a <= '2')
	{
		if (a == '2')
		{
			max = '3';

		}
		b = '0';
		while (b <= max)
		{
			c = '0';
			while (c <= '5')
			{
				d = '0';
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
