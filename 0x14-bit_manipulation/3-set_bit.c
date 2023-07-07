#include "main.h"

/**
 * set_bit - change bvalue of index.
 * @n: input bit
 * @index: desired index
 *
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
