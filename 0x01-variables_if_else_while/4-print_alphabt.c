#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char start;

for (start = 'a'; start <= 'z'; start++)
if (start != 'e' && start != 'q')
putchar (start);

return(0);

}
