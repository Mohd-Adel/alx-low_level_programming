#include "main.h"
#include <string.h>
/**
*_strncat - concatenates two strings.
*@dest: input char
*@src: input char
*@n: input number
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
