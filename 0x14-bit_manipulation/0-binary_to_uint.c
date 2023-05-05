#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 * Return: unsigned int of decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int output = 0;

	for (i = 0; i < strlen(b); i++)
	{
		output += (b[i] - '0') * (8 - i);
	}
	return (output);
}
