#include "main.h"
#include <stdio.h>



/**
 * print_to_98 - this function prints natural numbers from n to 98
 * @n: is the input
 */

void print_to_98(int n)
{
if (n > 98)
{

while (n > 98)
{

if(n != 98)
{

printf("%d ", n);

}

else
{

printf("%d", n);

}
n--;

}

}
else
{
while(n <= 98)
{
if (n != 98)
{
printf("%d, ", n);
n++;
}
else
{
printf("%d", n);
}
n++;
}

_putchar ('\n');
}
}

