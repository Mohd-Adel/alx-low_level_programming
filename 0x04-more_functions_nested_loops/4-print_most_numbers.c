#include "main.h"
/**
 * print_most_numbers - prints most of numbers, from 0 to 9.
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
		}
	}
}
