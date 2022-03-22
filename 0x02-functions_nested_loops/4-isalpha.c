#include "main.h"
/**
 * _isalpha - checks if an input is alphabet
 * @c: is the input being checked
 * Return: returns 0 when not alphabet and 1 if else
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
