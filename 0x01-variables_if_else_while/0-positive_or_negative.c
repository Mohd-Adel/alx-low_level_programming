#include <stdio.h>
/**
 * main - this program determine whether the input number is positive or negative
 * Return: 0 (Success)
*/
int main(void)
{
int n=5;
if (n == 0)
{
printf("%d is zero", n);
}
else
{
if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is negative", n);
}
}
return (0);
}

