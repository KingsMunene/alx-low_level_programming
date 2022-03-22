#include "main.h"
/**
 * times_table - this function prints 9 times table starting from 0
 */

void times_table(void)
{
int main,mult,ans;

for (main = 0; main <= 9; main++)
{
for (mult = 0; mult <= 9; mult++)
{
ans = main * mult;
if (mult != 9)
{
_putchar (ans + '0');
_putchar (',');
_putchar (' ');
}
else
{
_putchar (ans + '0');
}
}
_putchar ('\n');
}
}
