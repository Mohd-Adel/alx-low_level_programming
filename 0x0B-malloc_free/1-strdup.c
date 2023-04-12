#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory.
*Return: array of characters.
*@str: input string.
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * strlen(str));
	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
