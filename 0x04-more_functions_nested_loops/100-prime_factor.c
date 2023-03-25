#include <stdio.h>
/**
 * main - prints the largest prime factor of the number.
 * Return: 0 or 1.
 */
int main(void)
{
	int i;
	long int n = 612852475143;

	for (i = 1 ; i <= n ; i++)
	{
		if ((n % i) == 0)
		{
			if (n == i)
			{
				printf("%d \n", i);
				return (i);
			}
			n = n / i;
			i = 2;
		}
	}
}
