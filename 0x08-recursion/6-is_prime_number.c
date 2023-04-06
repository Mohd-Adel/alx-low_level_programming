#include "main.h"
int helper_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: input number
 * Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper_prime(n, n - 1));
}
/**
 * helper_prime - helper function
 * @n: input number
 * @i: init zero for iteration
 * Return: result
 */
int helper_prime(int n, int i)
{
	if (i == 1)
	{
	return (1);
	}
	if (n % i == 0 && i > 0)
	{
	return (0);
	}
	return (helper_prime(n, i - 1));
}
