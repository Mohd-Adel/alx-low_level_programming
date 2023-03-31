
#include "main.h"
/**
 * leet - encode into 1337speak
 * @input: input value
 * Return:  value
 */
char *leet(char *input)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; input[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (input[x] == s1[y])
			{
				input[x] = s2[y];
			}
		}
	}
	return (input);
}
