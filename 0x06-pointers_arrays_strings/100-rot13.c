#include <stdio.h>
#include "main.h"
/**
 *rot13 -  encodes a string using rot13.
 *@input: input string
 *Return: string
 */
char *rot13(char *input)
{
	int i, j = 0;
	char output;

	for (i = 0; i <= strlen(input); i++)
	{
		if (input[i] < n)
		{
			output[j] = input[i] + 13;
			j++;
		}
		else
		{
			output[j] = input[i] - 13;
			j++
		}
	}
	return (output);
}
