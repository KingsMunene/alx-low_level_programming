#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
int hour, minutes;

for (hour = 0; hour <= 24; hour++)
{
for (minutes = 0; minutes < 60; minutes++)
{
if (hour < 10)
{
_putchar (0 + '0');
_putchar (hour + '0');

}
else
{
_putchar (hour + '0');
}

_putchar (':');

if (minutes < 10)
{
_putchar (0 + '0');
_putchar (minutes + '0');
}
else
{
_putchar (minutes + '0');
}

}
}
_putchar ('\n');
}
