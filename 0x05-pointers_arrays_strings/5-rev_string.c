#include "main.h"
#include <string.h>
/**
*rev_string- revert a string.
*@s: input string.
*/
void rev_string(char *s)
{
	int i;
	char *str;

	for (i = strlen(s) - 1 ; i >= 0; i--)
	{
	str[i] = s[i];
	}
	*s = &s;
}
