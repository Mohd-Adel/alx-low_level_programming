#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: input string.
 * Return: 1 if success.
 */

int helperfunction (char *input , int start , int end )
{
	if (*(input + start) != *(input + end - 1))
	{
	return (0);
	}
	if (start >= end - 1 )
	{
	return (1);
	}
	return ( helperfunction(input, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: input string.
 * Return: 1 if success.
 */
int is_palindrome(char *s)
{
	if (!*s)
	{
	return (1);
	}
	return (helperfunction(s, 0, strlen(s)));
}
