#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
for (number0 = 0; number0 < 10; number0++)
{
putchar (number + '0');
putchar (number + '0');
if (number <= 8)
putchar (',');
putchar (' ');
}
}
return (0);

}
