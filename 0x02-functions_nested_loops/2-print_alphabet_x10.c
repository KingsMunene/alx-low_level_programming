#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 */



void print_alphabet_x10(void)
{
int i = 0;
char j;
while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar (j);
}
_putchar ('\n');
i++;
}

}
