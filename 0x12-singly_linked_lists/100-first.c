#include <stdio.h>

void bprint(void) __attribute__ ((constructor));

/**
 * bprint - prints a sentence before the main
 * Return: no return
 */

void bprint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
