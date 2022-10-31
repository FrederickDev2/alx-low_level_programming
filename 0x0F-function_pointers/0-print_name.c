#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name of input
 * @f: pointer
 * return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
