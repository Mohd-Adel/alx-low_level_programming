#include <stdio.h>
/**
 * main - This program print all possible combinations of 2 digits
 * Return: 0 (Success)
*/
int main(void)
{
	int i = 48;
	int j = 48;

	while (i >= 48 && i <= 57)
	{
		while (j >= 48 && j <= 57)
		{
			putchar (i);
			putchar (j);
			j++;
		}
		i++;
	}
	return (0);
}
