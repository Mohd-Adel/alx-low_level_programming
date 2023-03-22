#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for lowercase character.
 * Return: 0 (Success)
 * @c: letter to be checked
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (isalpha(c));
}
