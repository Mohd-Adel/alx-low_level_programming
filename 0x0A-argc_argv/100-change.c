#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints min number of coins.
 *@argc: args number.
 *@argv: args values.
 *Return: change.
 */

int main(int argc, char *argv[])
{
	int input, i;
	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi(argv[1]);
	if (input < 0)
	{
		printf("0");
		return (1);
	}
	for (i = 0; coins[i]; i++)
	{
		if (input % coins[i] == 0)
		{
			change += (input / coins[i]);
			input = input % coins[i];
		}
		else
		{
			change += (input / coins[i]);
			input = input % coins[i];
		}
	}
	printf("%i\n", change);
	return (change);
}
