#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to integer.
 * Return: integer
 * @s: input
 */
int _atoi(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] <= 9 && s[i] >= 0)
		{
			_putchar(s[i] + '0');
		}
	}
}
