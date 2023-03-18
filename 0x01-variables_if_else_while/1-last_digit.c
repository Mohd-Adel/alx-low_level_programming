#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program prints last digit
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int m;
char x;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (n > 5)
{
x = "and is greater than 5\0";
}
else
{
if (x == 0)
{
x = "and is 0\0";
}
else
{
x = "and is less than 6 and not 0\0";
}
}
printf("Last digit of %d is %d %s\n", n, m, x);
return (0);
}

