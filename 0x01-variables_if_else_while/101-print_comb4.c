#include <stdio.h>
/**
 * main - this program prints possible different combinations of three digits.
 * Return: 0 (Success)
*/
int main(void)
{
int i, j, k;
for (i = 48 ; i <= 57 ; i++)
{
	for (j = 49 ; j <= 56 ; j++)
	{
		for (k = 50 ; k <= 55 ; k++)
		{
			if (i != j && i != k && k != j)
			{
			putchar(i);
			putchar(j);
			putchar(k);
			putchar(',');
			putchar(' ');
			}
		}
	}
}
return (0);
}

