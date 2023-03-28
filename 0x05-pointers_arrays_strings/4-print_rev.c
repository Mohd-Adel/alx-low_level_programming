#include "main.h"
#include <string.h>
/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: input number
*/
void print_rev(char *s)
{
	int i;

	if (strlen(s) == 0)
	{
		_putchar(10);
	}
	for (i = strlen(s) - 1 ; i >= 0; i--)
	{
	_putchar(s[i]);
	if (i == 0)
	{
		_putchar(10);
	}
	}
}
