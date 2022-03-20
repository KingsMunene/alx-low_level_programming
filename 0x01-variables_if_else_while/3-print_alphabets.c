#include <stdio.h>
#include <stdlib.h>
/**
 * Main it the entry point
 *
 * Return value is 0 meaning success
 *
 */

int main(void)
{
char small = 'a';
char big = 'A';

while(small <= 'z' && big <= 'Z')
{
putchar (small);
putchar (big);

small++;
big++;
}
putchar ('\n');

return (0);
}

