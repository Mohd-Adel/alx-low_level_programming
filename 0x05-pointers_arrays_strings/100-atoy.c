#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to integer.
 * Return: integer
 * @s: input
 */
int _atoi(char *s)
{
	int i, j = 0, opt;
	int len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] <= 9 && s[i] >= 0)
		{
			opt[j] = (s[i] + '0');
			j++;
		}
	}

	return (opt);
}
