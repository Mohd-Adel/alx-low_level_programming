#include "main.h"
#include <string.h>
/**
* _strcat - concatenates two strings.
* @dest: input char
* @src: input char
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
