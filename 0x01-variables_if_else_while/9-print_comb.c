#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int number,number0;

for(number = 0; number < 10; number++)
{
for(number0 = number + 1; number0 < 10; number0++)
{
putchar (number + '0');
putchar (number0 + '0');
putchar (',');
putchar (' ');
}
}

return (0);

}
