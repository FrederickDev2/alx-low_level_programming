#include<stdio.h>
#include "main.h"
#include "stddef.h"
/**
 * reverse_array - reverses a string
 * @a: string
 *
 * @n: is the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, j;

	j = 0;

	n = n - 1;
	for (j = 0; j <= n; j++)
	{
		b = a[n];
		a[n]  = a[j];
		a[j] = b;
		n--;
	}
}
