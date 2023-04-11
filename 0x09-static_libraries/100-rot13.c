#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *rot13 -  encodes a string using rot13.
 *@input: input string
 *Return: string
 */
char *rot13(char *input)
{
	int i, j = 0;
	char output[] = "";
	int size = strlen(input);
	char n = 'n';

	for (i = 0; i <= size; i++)
	{
		if (isalpha(input[i]) && input[i] < n)
		{
			output[j] = input[i] + 13;
			j++;
		}
		else
		{
			output[j] = input[i] - 13;
			j++;
		}
	}
	return (output);
}
