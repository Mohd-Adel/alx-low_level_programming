#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for ( i = 97 ; i <= 122 ; i++)
	{
		for ( j = 1 ; j <= 10 ; j++)
		{
			_putchar(i);
			if ( i == 122 )
			{
				_putchar("\n");
			}
		}
	}
}
