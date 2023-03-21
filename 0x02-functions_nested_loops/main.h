#ifndef "main.h"
#define "main.h"
/**
 *print_alphabet - prints alphabets
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		if (i == z)
		{
			putchar(10);
		}
	}
};

#endif
