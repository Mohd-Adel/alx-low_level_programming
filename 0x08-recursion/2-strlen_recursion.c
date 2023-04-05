#include "main.h"
/**
 *_strlen_recursio - returns the length of a string.
 *@s: string
 *Return: string length. 
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);	
	}

	return ( 1 + _strlen_recursion(s + 1));
	
}
