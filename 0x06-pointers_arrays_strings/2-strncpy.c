#include "main.h"
#include <string.h>
/**
*_strncat - copy strings.
*@dest: input char
*@src: input char
*@n: input number
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
