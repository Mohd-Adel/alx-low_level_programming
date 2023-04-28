#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: input string 1.
 * @s2: input string 2.
 * @n:number of s2 characters.
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	k = 0;
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	ptr = malloc((strlen(s1) * sizeof(char)) + (n * sizeof(char)) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = i; j < i + n; j++)
	{
		ptr[j] = s2[k];
		k++;
	}
	return (ptr);

}
