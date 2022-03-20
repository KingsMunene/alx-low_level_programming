#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char top = 'z';
while (top > 'a')
{
putchar(top);
top--;
}
putchar('\n');
return (0);
}
