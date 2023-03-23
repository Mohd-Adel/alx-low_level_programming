#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: input
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar("0" + (i * j));
			_putchar("0" + ",");
			_putchar("0" + " ");
			_putchar("0" + " ");
			_putchar("0" + " ");
		}
	}
}
