#include "main.h"
/**
 * is_natural - checks integer as natural square root
 * @square: square integer
 * @x: integer
 * Return: number
 */

int is_natural(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (is_natural(square, x - 1));
	else if (x < square / x)
		return (is_natural(square, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (is_natural(n, start));
}
