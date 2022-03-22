#include "main.h"
/**
 * times_table - this function prints 9 times table starting from 0
 */

void times_table(void)
{
int main, mult, ans;

for (main = 0; main < 10; main++)
{
for (mult = 0; mult < 10; mult++)
{
ans = main * mult;
if (ans < 10)
{
_putchar (ans + '0');

if (mult < 9 )
{
_putchar (',');
_putchar (' ');
_putchar (' ');

}
}
else
{
_putchar ((ans / 10) + '0');
_putchar ((ans % 10) + '0');
if (mult < 9)
{
_putchar (',');
_putchar (' ');
}
}

}
_putchar ('\n');
}
_putchar ('\n');
}
