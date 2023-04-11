#include "main.h"
/**
 * more_numbers - prints most of numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9 && i <= 14)
		{
		_putchar('0' + 1);
		}
		_putchar('0' + (i % 10));
		if (i == 14)
		{
			_putchar('\n');
		}
	}
	}
}
