#include "main.h"
/**
 * print_last_digit - checks for lowercase character.
 * Return: 0 (Success)
 * @n: input
 */
int print_last_digit(int n)
{
	int x, y;

	x = (n % 10) * 11;
	y = x + 48;
	_putchar(y);
	return (x);
}

