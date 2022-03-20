#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int number = 0;
char a;

while (number < 10)
{
putchar (number + '0');
number++;
}
for (a = 'a'; a <= 'f'; a++)
{
putchar (a);
}

return (0);

}

