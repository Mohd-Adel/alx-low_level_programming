#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 *@n: input
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
		if (i == n)
		{
			_putchar('\n');
		}
	}
}
