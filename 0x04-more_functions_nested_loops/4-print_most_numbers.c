#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * new line after printing
 */

void print_most_numbers(void)
{
int c = 0;

while (c <= 9)
{
if (c != 2 && c != 4)
{
_putchar(c + '0');
}
c++;
}
_putchar ('\n');
}
