#include <stdio.h>
/**
 * main - This program print all possible combinations of 2 digits
 * Return: 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j = 0;

	while (i >= 0 && i <= 9)
	{
		while (j >= 0 && j <= 9)
		{
			putchar (i);
			putchar (j);
			j++;
		}
		i++;
	}
	return (0);
}
