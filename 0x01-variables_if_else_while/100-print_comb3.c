#include <stdio.h>
/**
 * main - This program print all possible combinations of 2 digits
 * Return: 0 (Success)
*/
int main(void)
{
	for (int i; 0 <= i && i <= 9; i++)
	{
		for (int j; 0 <= j && j <= 9; j++)
		{
			putchar (i);
			putchar (j);
		}
	}
	return (0);
}
