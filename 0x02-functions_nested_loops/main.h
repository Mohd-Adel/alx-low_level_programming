#ifndef _MAIN
#define _MAIN
/**
 *print_alphabet - prints alphabets
*/
void print_alphabet(void)
{
	int i, _putchar;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar(10);
		}
	}
}

#endif
