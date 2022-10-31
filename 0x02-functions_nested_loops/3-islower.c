#include<stdio.h>
#include "main.h"
#include "ctype.h"
/**
 * _islower - checks for lowercase
 * @c: c is a character
 *
 * Return: 1 for success 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
