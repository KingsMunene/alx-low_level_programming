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
last = ((a % 10) * -1);
_putchar(last + '0');
return (last);

}
else 
{
last = (a % 10);
_putchar (last);
return (last);
}
}
