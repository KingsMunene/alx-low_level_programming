#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * followed by a newline 
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
