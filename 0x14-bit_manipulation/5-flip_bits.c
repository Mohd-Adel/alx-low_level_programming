#include "main.h"

/**
 * flip_bits - return counted numbers
 * @n: input number
 * @m: desired output
 *
 * Return: requred numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor = n ^ m, count = 0;

	while (_xor > 0)
	{
		count += (_xor & 1);
		_xor >>= 1;
	}

	return (count);
}
