#include "main.h"
/**
 * print_last_digit - Checks the last digit in a number
 * @a: The number to be checked
 * Return: Returns the last digit
 */

int print_last_digit(int a)
{
int last;

if (a < 0)
{
last = -1 * (a % 10);
_putchar(last + '0');
return (last);

}
else
{
last = (a % 10);
_putchar (last + '0');
return (last);
}
}
