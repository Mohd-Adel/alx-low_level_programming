#include <stdio.h>
/**
 * main - this program prints possible different combinations of three digits.
 * Return: 0 (Success)
*/
int main(void)
{
int i, j, k;
for (i = 48 ; i <= 55 ; i++)
{
	for (j = 49 ; j <= 56 ; j++)
	{
		for (k = 50 ; k <= 57 ; k++)
		{
			if (i != j && i != k && k != j && j > i && k > i && k > j)
			{
			putchar(i);
			putchar(j);
			putchar(k);
			if (!(i == 55 && j == 56 && k == 57))
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
}
putchar('\n');
return (0);
}

