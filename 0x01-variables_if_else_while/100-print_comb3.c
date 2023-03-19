#include <stdio.h>
/**
 * main - This program print all possible combinations of 2 digits
 * Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i; 0 <= i && i <= 9; i++)
	{
		for (j; 0 <= j && j <= 9; j++)
		{
			putchar (" ");
			putchar (i);
			putchar (j);
			putchar (",");
		}
	}
	return (0)
}
