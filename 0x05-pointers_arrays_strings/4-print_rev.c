#include "main.h"
#include <string.h>
/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: input number
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) ; i >= 0; i++)
	{
	_putchar("0" + s[i]);
	}
}
