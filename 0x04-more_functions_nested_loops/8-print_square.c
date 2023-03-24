#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 *@size: input
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (j = 1; j <= size; j++)
	{
	for (i = 1; i <= size; i++)
	{
		_putchar(35);
	}
	if (j < size)
	{
	_putchar('\n');
	}
	}
	}
	_putchar('\n');
}
