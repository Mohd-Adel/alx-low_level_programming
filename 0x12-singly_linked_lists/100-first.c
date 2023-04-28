#include <stdio.h>

void __attribute__((constructor)) before_main(void);

/**
 *before_main - Prints a string before main.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
