#ifndef _MAIN
#define _MAIN
/**
 *print_alphabet - prints alphabets
*/
void print_alphabet(void)
{
	int i;

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
