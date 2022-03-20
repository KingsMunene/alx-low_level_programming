#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int number, number0;

for (number = 0; number < 10; number++)
{
putchar (number + '0');
for (number0 = number + 1; number0 < 10; number0++)
{
if (number0 <= 8)
putchar (',');
putchar (' ');
}
}
return (0);

}
