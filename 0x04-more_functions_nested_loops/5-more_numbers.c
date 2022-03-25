#include "main.h"

/**
 * more_numbers - prints 10 times numbers, from 0 to 14
 * followed by a new line 
 */

void more_numbers(void)
{
int c, d;

for (c = 0; c < 10; c++)	
{

for (d = 0; d < 15; d++)
{

if (d >= 10)
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');

}

_putchar('\n');

}
}
