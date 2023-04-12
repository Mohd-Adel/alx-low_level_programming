#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
*create_array - creates an array of chars.
*Return: array of characters.
*@size: input size.
*@c: input char.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	for (i = 0; i <= size; i++)
	{
		s[i] = c;
	}
	return (s);
}
