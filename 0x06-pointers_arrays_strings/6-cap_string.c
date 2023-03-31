#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: capitals
 */
char *cap_string(char *str)
{
	int x = 0;
	int y = 0;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (str[x] != '\0')
	{
		if (x == 0 && str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		while (c[y] != '\0')
		{
			if (c[y] == str[x] && (str[x + 1] >= 97 && str[x + 1] <= 122))
			{
				str[x + 1] = str[x + 1] - 32;
			}
			y++;
		}
		x++;
	}
	return (str);
}
