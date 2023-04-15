#include <stdio.h>
/**
 *main - prints min number of coins.
 */
void main(int argc, int *argv)
{
	int input = argv;
	int change = 0;

	change = (input / 25) + ((input % 25) / 10) + (((input % 25) % 10) / 5) + ((((input % 25) % 10) % 5) / 2) + (((((input % 25) % 10) % 5) % 2) / 1);
	printf("%d\n", change);
}
