#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 * Return: unsigned int of decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		output = 2 * output + (b[i] - '0');
}
return (output);
}
