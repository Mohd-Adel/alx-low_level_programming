#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: input
 */
void print_times_table(int n)
{
	int i, j;

	if ( n > 15 || n < 0)
	{
		return (0);
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			_putchar(' ');
			if ((i * j) > 99)
			{
			_putchar(' ');
			}
			if ((i * j) > 9 && (i * j) < 99)
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
