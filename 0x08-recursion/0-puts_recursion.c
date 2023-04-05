#include "main.h"
#include <string.h>
/**
*_puts_recursion -  prints a string, followed by a new line.
*@s: input string.
*/
unsigned int i = 0;
void _puts_recursion(char *s)
{
	_putchar(s[i]);
	i++;
	if (i < strlen(s))
	{
	_puts_recursion(s);
	}
	
}
_putchar('\n');
