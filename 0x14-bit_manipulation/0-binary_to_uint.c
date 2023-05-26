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

	while (b && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		output = output << 1;
		output = output | (*b - '0');
		b++;
	}
		return (output);
}
