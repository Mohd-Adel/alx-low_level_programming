#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: input
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0' + ((i * j) % 10));
			if (j < n)
			{
			_putchar(',');
			_putchar(' ');
			if ((i * j) >= 100)
			{
			_putchar('0' + ((i * j) / 100));
			}
			if ((i * j) >= 10)
			{
			_putchar('0' + ((i * j) / 10) );
			}
			}
		}
		_putchar('\n');
	}
	}
}

