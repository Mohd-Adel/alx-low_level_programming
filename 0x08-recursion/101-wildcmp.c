#include "main.h"
/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * @s1: input string 1
 * @s2: input string 2
 * Return: 1 if identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s2 == '\0' && *s1 == '\0')
	{
	return (1);
	}
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
	return (0);
	}
	return (0);
}
