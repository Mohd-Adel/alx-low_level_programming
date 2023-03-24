#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *@n: input
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (j = 1; j <= n; j++)
	{
	for (i = 1; i <= (j - 1); i++)
	{
		_putchar(32);
	}
	_putchar(92);
	if (j < n)
	{
	_putchar('\n');
	}
	}
	}
	_putchar('\n');
}
