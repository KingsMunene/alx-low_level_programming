#include "main.h"
/**
 * print_line - The function prints a line on the terminal
 * @n: the number of times the line character will be printed
 * new line is printed if n is less or equal to zero
 */

void print_line(int n)
{
int count = 0;

if (n != 0 && n < 0)
{
while (count <= n)
{
_putchar('_');
count++;
}
_putchar('_');
}
else
{
_putchar('_');
}
}
