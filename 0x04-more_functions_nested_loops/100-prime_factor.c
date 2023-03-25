#include <stdio.h>
/**
 * main - prints the largest prime factor of the number.
 * Return: 0 or 1.
 */
int main(void)
{
	int n = 612852475143;

	while ((n % 5) == 0 || (n % 3) == 0 || (n % 2) == 0)
	{
		if ((n % 2) == 0)
		{
			n = n / 2;
		}
		else if ((n % 3) == 0)
		{
			n = n / 3;
		}
		else if ((n % 5) == 0)
		{
			n = n / 5;
		}
		else
		{
			return (n);
		}
	}
}
