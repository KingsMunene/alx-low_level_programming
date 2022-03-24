#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * newline 
 */

void more_numbers(void)
{
int c = 0;
int d = 0;

while (c <= 10)
{
while (d <= 14)
{
_putchar(d + '0');
d++;
}
c++;
}
}
