#include "main.h"

/**
 * clear_bit - clears bit
 * @n: input but
 * @index: desired index
 *
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
