#include "main.h"
/**
*swap_int - updates the value it points to to 98.
*@a: input number
*@b: input number
*/
void swap_int(int *a, int *b)
{
	a = b;
	b = a;
}
