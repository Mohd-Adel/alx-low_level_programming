#include <stdio.h>
/**
 * main - This program print all possible combinations of 2 digits
 * Return: 0 (Success)
*/
int main(void)
{
	int i = 48;
	int j = 49;

	for (i; i <= 56; i++)
	{
		for (j; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

