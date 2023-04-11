#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character.
 * Return: 0 (Success)
 * @c: letter to be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (islower(c));
}

