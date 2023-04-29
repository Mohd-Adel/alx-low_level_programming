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
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = i + 1; j < i + n + 1; j++)
	{
		ptr[j] = s2[k];
		k++;
	}
	ptr[j + 1] = '\0';
	return (ptr);

}
