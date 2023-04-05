#include "main.h"
#include <string.h>
/**
*_puts_recursion -  prints a string, followed by a new line.
*@s: input string.
*/
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	_putchar('\n');
	i++;
	if (i < strlen(s))
	{
	_puts_recursion(*s);
	}
}
