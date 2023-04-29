#include "main.h"
#include <stdlib.h>
/**
 * calc_len- function to calculate length.
 * @str: input string.
 * Return: str len.
 */

int calc_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: input string 1.
 * @s2: input string 2.
 * @n:number of s2 characters.
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2, i, j;
	char *ptr;

	if (s1 == NULL)
		lens1 = 0;
	else
	{
		lens1 = calc_len(s1);
	}
	if (s2 == NULL)
		lens2 = 0;
	else
	{
		lens2 = calc_len(s2);
	}
	if (lens2 > n)
		lens2 = n;
	ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		s[i] = s1[i];
	for (j = 0; j < lens2; j++)
		s[j + i=lens1] = s2[j];
	s[lens1 + lens2] = '\0';
	return (ptr);}
