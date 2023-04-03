#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: input memory stored
 *@src: input memory copied
 *@n: input number
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
