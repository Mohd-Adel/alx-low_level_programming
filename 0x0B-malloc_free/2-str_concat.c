#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *x, *y;

	x = s1;
	if (s1)
		while (*x++)
			size1++;
	else
		s1 = "";

	x = s2;
	if (s2)
		while (*x++)
			size2++;
	else
		s2 = "";

	y = malloc(size1 + size2 + 1);
	if (!y)
		return (NULL);

	x = y;
	while (*s1)
		*x++ = *s1++;
	while (*s2)
		*x++ = *s2++;
	*x = 0;

	return (y);
}
