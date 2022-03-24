#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * @c: is the counter
 */

void print_numbers(void)
{
int c = 0;

while ( c <= 9)
{
_putchar (c + '0');
c++;
}
_putchar ('\n');
}
