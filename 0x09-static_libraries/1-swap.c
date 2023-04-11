#include "main.h"
/**
*swap_int - updates the value it points to to 98.
*@a: input number
*@b: input number
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
