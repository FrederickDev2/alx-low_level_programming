#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *array, diff, num, j;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	array = malloc(diff * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (num = min, j = 0; num <= max && j < diff; num++, j++)
		array[j] = num;
	return (array);
}
