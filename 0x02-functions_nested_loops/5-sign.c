#include "main.h"
/**
 * print_sign - checks if input is greater than 1, if it is 0, or less than 0
 *@n: is the input being checked
 * Return: returns 1,0 or -1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
