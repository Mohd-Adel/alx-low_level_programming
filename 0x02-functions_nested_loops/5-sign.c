#include "main.h"
/**
 * print_sign - checks for lowercase character.
 * Return: 0 (Success)
 * @n: letter to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}

