#include <stdio.h>
/**
 * main - this program prints number and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

