#include <stdio.h>
/**
 * main - prints the largest prime factor of the number.
 * Return: 0.
 */
int main(void)
{
	long int i, j, n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			if (n == i)
			{
				printf("%ld\n", n);
				break;
			}
			j = n / i;
			n = j;
			i = 1;
		}
	}
	return (0);
}
