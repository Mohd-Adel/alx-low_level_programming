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
	int i, j, power;
	unsigned int output;

	output = 0;
	if (!b)
		return (0);
	power = 1;
	for (j = 0; b[j];)
	{
		j++;
	}
	for (i = j; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		power *= 2;
		if (b[i] & 1)
			output += power;
	}
	return (output);
}
