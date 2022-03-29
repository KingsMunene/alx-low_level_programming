#include "main.h"

 /**
  * puts_half - print second half of a string
  * @str: char array string type
  */
void puts_half(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
;
a++;
for (a /= 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
