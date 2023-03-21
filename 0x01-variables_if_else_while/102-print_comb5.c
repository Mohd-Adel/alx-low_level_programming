#include <stdio.h>
/**
 * main - this program prints possible combinations of two two-digit numbers
 * Return: 0 (Success)
*/
int main(void)
{
int i, j, k, l;
for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (l = 48; l <= 57; l++)
			{
			if (k >= i && l >= j)
			{
			if (!(k == 48 && l == 48))
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);
			if (!(i == 57 && k == 57 && j == 57 && l == 57))
			{
				putchar(',');
				putchar(' ');
			}
			}
			}
			}
		}
	}
}
putchar('\n');
return (0);
}
