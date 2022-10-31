#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first value of integer
 * @b: second value of integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;


	*a = *b;
	*b = swap;
}
