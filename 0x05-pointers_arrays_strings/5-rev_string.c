#include "main.h"
#include <string.h>
/**
*rev_string- revert a string.
*@s: input string.
*/
void rev_string(char *s)
{
	char str;
	int i, x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		str = s[i];
		s[i] = s[y];
		s[y--] = str;
	}
}
