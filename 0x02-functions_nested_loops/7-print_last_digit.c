#include "main.h"
/**
 * print_last_digit - Checks the last digit in a number
 * @a: The number to be checked
 * Return: Returns the last digit
 */

int print_last_digit(int a)
{
int last = a % 10;

if (last < 0)
{
return (last * -1);
}
else 
{
_putchar (last);
return (last);
}
}
