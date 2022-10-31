#include "main.h"
/**
 * length - returns length of string
 * @s: string
 * Return: integer length
 */

int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * compare - compare characters
 * @s: string
 * @begin: beginning index
 * @end: end index
 * Return: integer indicating non-match 0, match 1
 */

int compare(char *s, int begin, int end)
{
	if (s[begin] != s[end])
		return (0);
	else if (begin == end && s[begin] == s[end])
		return (1);
	else if (begin == end - 1 && s[begin] == s[end])
		return (1);
	else
		return (compare(s, begin + 1, end - 1));
}

/**
 * is_palindrome - checks is string is a palindrome
 * @s: string
 * Return: integer, 1 if palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int len, begin, end;

	len = length(s);
	begin = 0;
	end = len - 1;
	if (len == 0 || len == 1)
		return (1);
	else
		return (compare(s, begin, end));
}
