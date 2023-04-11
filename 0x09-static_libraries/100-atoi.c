#include "main.h"
#include <string.h>
#include <ctype.h>
/**
*_atoi - convert a string to an integer.
*@s: input string.
*/
int _atoi(char *s)
{
	int i;
	int n = strlen(s);
	int output;

	for (i = 0; i <= n; i++)
	{
		printf("%d",isdigit(s[i]));
	}
return(0);
}

