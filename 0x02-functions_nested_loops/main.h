#ifndef _MAIN
#define _MAIN
/**
 *print_alphabet - prints alphabets
 _putchar - prints _putchar
*/
void _putchar(void)
{
	printf("_putchar\n");
}

void print_alphabet(void)
{
	int i, putchar;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		if (i == 122)
		{
			putchar(10);
		}
	}
}

#endif
