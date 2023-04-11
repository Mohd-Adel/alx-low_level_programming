#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
