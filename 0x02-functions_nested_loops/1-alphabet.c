#include "main.h"
/**
 * print_alphabet- prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
{
int i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
if (i == 122)
{
_putchar(10);
}
}
}
}
