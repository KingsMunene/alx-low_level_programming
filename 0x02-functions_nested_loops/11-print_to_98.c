#include "main.c"

/**
 * print_to_98 - this function prints natural numbers from n to 98
 * @n: is the input
 */

void print_to_98(int n)
{
while(n <= 98)
{
_putchar (n + '0');
n++;
}
_putchar ('\n');
}

