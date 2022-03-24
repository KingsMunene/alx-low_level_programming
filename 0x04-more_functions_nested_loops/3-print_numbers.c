#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * new line after printing
 */

void print_numbers(void)
{
int c = 0;

while (c <= 9)
{
_putchar(c + '0');
c++;
}
_putchar ('\n');
}
