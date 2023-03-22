#include "main.h"
/**
 * print_last_digit - checks for lowercase character.
 * Return: 0 (Success)
 * @n: input
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	_putchar(x + '0');
	return (x);
}

