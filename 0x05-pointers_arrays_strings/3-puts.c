#include "main.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (k = 0; c[k]; k++)
{
_putchar (c[k]);
}
_putchar('\n');
}
