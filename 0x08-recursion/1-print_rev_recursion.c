#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string being printed in reverse
 *Return: blank
 */

void _print_rev_recursion(char *s)
{
if ( *s == '\0')
{
return;
}
s++;
__print_rev_recursion(s);
s--;
_putchar(*s);
}

