#include "main.h"

/**
 * string_toupper - changes all lower case to capital lette
 * @str: string to modify
 * Description: changes all lower case letters to capitals
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
