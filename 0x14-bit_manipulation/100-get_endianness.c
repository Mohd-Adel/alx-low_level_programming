#include "main.h"

/**
 * get_endianness - check for endianness.
 *
 * Return: if enduan
 */
int get_endianness(void)
{
	int i = 1;
	char *_isendian = (char *)&i;

	if (*_isendian == 1)
		return (1);

	return (0);
}
