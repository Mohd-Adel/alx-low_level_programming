#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - this program prints the alphabet without q and e.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}

